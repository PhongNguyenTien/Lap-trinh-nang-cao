#include<iostream>

using namespace std;

struct Student {
    string name;
    int roll_no;
};

int main(){
    string nameOfStudent ;
    int rollNo;
    nameOfStudent = "John";
    rollNo = 2;
    Student stu;
    stu.name = nameOfStudent;
    stu.roll_no = rollNo;
    cout << stu.name << " " << stu.roll_no;
    return 0;
}