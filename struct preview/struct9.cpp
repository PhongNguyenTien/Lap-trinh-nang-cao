#include<iostream>

using namespace std;

struct employee {
	string name;
	int salary;
	int hour;
	void store() {
		cin >> name >> salary >> hour;
	}
	void printName() {
		cout << name << endl;
	}
	void printSalary() {
		cout << salary << endl;
	}
};
void increaseTheSalary(employee& emp) {
	if (emp.hour >= 8 && emp.hour < 10) emp.salary += 50;
	if (emp.hour >= 10 && emp.hour < 12) emp.salary += 100;
	if (emp.hour >= 12) emp.salary += 150;
}
int main() {
	int numberOfEmployees;
	cin >> numberOfEmployees;
	employee emp[100];
	for (int i = 0; i < numberOfEmployees; i++) {
		emp[i].store();
	}
	for (int i = 0; i < numberOfEmployees; i++) {
		increaseTheSalary(emp[i]);
	}
	for (int i = 0; i < numberOfEmployees; i++) {
		emp[i].printName();
		emp[i].printSalary();

	}
	return 0;
}