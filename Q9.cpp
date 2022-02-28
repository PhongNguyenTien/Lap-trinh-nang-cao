#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b && a > 0 && b > 0 && c > 0) {
        double p = (a + b + c) / 2;
        double square = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << square;
    }
    else cout << "invalid";
    return 0;
}