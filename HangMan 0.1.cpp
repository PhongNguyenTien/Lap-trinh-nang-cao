#include <iostream>
using namespace std;
int MAX_BAD_GUESSES = 4;
string chooseWord();
void renderGame(string guessedWord, int badGuessCount);
char readAGuess();
bool contains(string word, char guess);
string update(string guessedWord, string word, char guess);

int main()
{
	string word = chooseWord();
	string guessedWord = string(word.length(), '-');
	int badGuessCount = 0;
	do {
		renderGame(guessedWord, badGuessCount);
		char guess = readAGuess();
		if (contains(word, guess)) 
			guessedWord = update(guessedWord, word, guess);
		else badGuessCount++;
	} while (badGuessCount < MAX_BAD_GUESSES && word != guessedWord);
	
	renderGame(guessedWord, badGuessCount);
	if (badGuessCount < MAX_BAD_GUESSES) 
		cout << "Chuc mung ban da thang cuoc !";
	else 
		cout << "Ban da thua cuoc !" << word; 
	return 0;
}
string chooseWord() 
{
	return "book";
}
void renderGame(string guessedWord, int badGuessCount)
{
	cout << guessedWord << endl;
	cout << "So lan doan sai: " << badGuessCount << endl;
}
char readAGuess() 
{
	char input;
	cout << "Nhap tu can doan : ";
	cin >> input;
	return input;
}
bool contains(string word, char c)
{
	return (word.find_first_of(c) != string::npos);
}
string update(string guessedWord, string word, char guess)
{
	for (int i = word.length() - 1; i >= 0; i--) {
        if (word[i] == guess) {
            guessedWord[i] = guess;
        }
    }
    return guessedWord;
}
