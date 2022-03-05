#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    int countAlpha = 0, countDigit = 0, countOther = 0;
    for (int i = 0; i < n; i++){
        if (isalpha(s[i]))
        {
            countAlpha++;
        }
        else if (isdigit(s[i]))
        {
            countDigit++;
        }
        else countOther++;
    }
    cout << countAlpha << " " << countDigit <<" " <<  countOther;
    return 0;
}