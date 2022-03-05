#include<iostream>
using namespace std;

bool checkSymmetric(int n, int a[]){
    for (int i = 0; i < n; i++){
        if (a[i] != a[n - 1 - i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (checkSymmetric(n, a) == true) cout << "Symmetric array.";
    else cout << "Asymmetric array.";
    return 0;
}