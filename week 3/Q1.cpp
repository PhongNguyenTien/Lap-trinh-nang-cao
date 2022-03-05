#include<iostream>

using namespace std;

void inputNumberArrays(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
}

bool checkArrays(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[10000], b[10000];
    inputNumberArrays(a, b, n);
        if (checkArrays(a, b, n) == true) cout << "YES";
        else cout << "NO";
    return 0;
}