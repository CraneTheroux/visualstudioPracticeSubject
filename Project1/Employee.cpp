#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

employee::employee(int id, string name, int deptId) {
	this->id = id;
	this->name = name;
	this->deptId = deptId;
};
void employee::showInfo() {
	cout << "employee's Id:" << this->id
		<< "\temployee's name:" << this->name
		<< "\temployee's department:" << this->getDeptName() << endl;
}
string employee::getDeptName() {
	return string("employee");
}