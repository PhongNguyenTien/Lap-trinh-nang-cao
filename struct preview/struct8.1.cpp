#include<iostream>

using namespace std;

struct customer {
    string name;
    int accountNumber;
    int balance;
    void getTheDetails(){
        cin >> name >> accountNumber >> balance;
    }
    void printName(){
        cout << name << endl;
    }
};
void add(customer& cus){
    cus.balance = cus.balance + 100;
}

int main(){
    int n;
    cin >> n;
    customer cus[100];
    for (int i = 0; i < n; i++){
        cus[i].getTheDetails();
    }
    for (int i = 0; i < n; i++){
        if (cus[i].balance < 200) cus[i].printName();
    }
    return 0;
}