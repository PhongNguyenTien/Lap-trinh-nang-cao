#include <iostream>

using namespace std;

struct student {
    int roll_no;
    string name;
    int age;
    int address;
    void getTheDetails(){
        cin >> roll_no >> name >> age >> address;
    }
    void printName(){
        cout << name << endl;
    }
    void printAge(){
        cout << age << endl;
    }
    void printAddress(){
        cout << address << endl;
    }
    void printRoll_no(){
        cout << roll_no << endl;
    }
};

int main(){
    int n;
    cin >> n;
    student students[100];
    for (int i = 0; i < n; i++){
        students[i].getTheDetails();
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++){
        if (students[i].roll_no == x) {
            students[i].printName();
            students[i].printRoll_no();
            students[i].printAge();
            students[i].printAddress();
        }
    }
    return 0;
}