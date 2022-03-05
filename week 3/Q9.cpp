#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int len = s.length();
    int countStartSpaces = 0;
    int k = 0;
    while (s[k] == ' '){
        k++;
        countStartSpaces++;
    }
    for (int i = 0; i < countStartSpaces - 1; i++){
        cout << " ";
    }
    for (int i = 0; i < len; i++){
        if ((s[i] == ' ' && s[i + 1] == ' ') == false) cout << s[i];
    }
    return 0;
}
