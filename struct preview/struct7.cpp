#include<iostream>

using namespace std;

struct student {
    int roll_no;
    string name;n
    int age;
    int address;
    void getTheDetails(){
        cin >> roll_no >> name >> age >> address;
    }
    void printName(){
        cout << name;
    }
    void printAge(){
        cout << age;
    }
    void printAddress(){
        cout << address;
    }
    void printRoll_no(){
        cout << roll_no;
    }
};

int main(){
    int n;
    cin >> n;
    student students[100];
    for (int i = 0; i < n; i++){
        students[i].getTheDetails();
    }
    for (int i = 0; i < n; i++){
        if (students[i].age == 14) {
            students[i].printName();
        }
    }
    return 0;
}