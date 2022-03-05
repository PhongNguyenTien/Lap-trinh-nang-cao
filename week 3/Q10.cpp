#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool allAreAlphabetsOrNumbers(string s){
    for (int i = 0; i < s.size(); i++){
        if (isalnum(s[i]) == 0) return false;
    }
    return true;
}

bool lengthFrom6To15(string s){
    if (s.length() < 6 || s.length() > 15) return false;
    return true;
}

bool numberIsNotBegin(string s){
    if (isdigit(s[0]) == false) return false;
    return true;
}

int main(){
    string s;
    getline(cin, s);
    if ((lengthFrom6To15(s) == true) && (allAreAlphabetsOrNumbers(s) == true) && (numberIsNotBegin(s) == true)) cout << "Valid username.";
    else cout << "Invalid username.";
    return 0;
}