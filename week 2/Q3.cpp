#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    for (int i = lowerBound; i <= upperBound; i++){
        if ((int)sqrt(i) == sqrt(i)) cout << i << " ";
    }
    return 0;
}