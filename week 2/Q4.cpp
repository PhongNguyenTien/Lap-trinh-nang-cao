#include<iostream>
using namespace std;

int main() {
    double total, totalOfLegs;
    cin >> total >> totalOfLegs;
    double numChicks, numDogs;
    numChicks = (4 * total - totalOfLegs) / 2;
    numDogs = total - numChicks;
    if (numChicks == (int)(numChicks)) {
        cout << "chicken = " << numChicks << ", " << "dog = " << numDogs;
    }
    else cout << "invalid";
    return 0;
}