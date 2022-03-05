#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int len = s.length();
    for (int i = 0; i < len; i++){
        if (s.substr(i, 4) != "Zues" || i > len - 4){
            cout << s[i];
        }
        else{
            cout << "Zeus";
            i += 3;
        }
    }
    return 0;
}