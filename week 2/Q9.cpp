#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int n;
    cin >> n;
    double a[1000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--){
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    return 0;
}