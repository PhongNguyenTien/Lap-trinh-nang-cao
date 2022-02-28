#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

double fun(double x){
    double sum = 1;
    int i = 1;
    double temp = x;
    while(temp > 0.001){
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}

int main(){
    double x;
    cin >> x;
    cout << fixed << setprecision(4) << fun(x);
    return 0;
}