#include<string>
string pigLatin(string word){
    int n = word.length();
    if (word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i'){
         word += "way";
    }
    else {
        char temp = word[0];
        for (int i = 0; i < n - 1; i++){
            word[i] = word[i + 1];
        }
        word[n - 1] = temp;
        word += "ay";
    }
    return word;
}