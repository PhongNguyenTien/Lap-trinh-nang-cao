#include<iostream>

using namespace std;

struct rectangle {
    double length;
    double breadth;
};

double returnArea(rectangle &rec){
    return rec.length * rec.breadth;
}

int main(){
    double x,y;
    cin >> x >> y;
    rectangle rec;
    rec.length = x;
    rec.breadth = y;
    cout << returnArea(rec);
    return 0;
}