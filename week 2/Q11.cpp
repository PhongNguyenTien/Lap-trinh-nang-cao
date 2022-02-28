#include<iostream>
#include<iomanip>

using namespace std;
double average(double a[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum /n;
}

int main(){
    int n;
    cin >> n;
    double a[10000];
    double key = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        key += (a[i] - average(a, n)) * (a[i] - average(a, n));
    }
    cout << fixed << setprecision(2) << key / n;
    return 0;
}