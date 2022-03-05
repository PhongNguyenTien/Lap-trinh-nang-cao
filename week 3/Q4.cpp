#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    double a[10000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    double x;
    cin >> x;
    double b[10000];
    for (int i = 0; i < n; i++){
        b[i] = a[i];
    }
    b[n] = x;
    sort(b, b + n + 1);
    for (int i = 0; i <= n; i++){
        cout << fixed << setprecision(2) << b[i] << " ";
    }
    return 0;
}