#include<iostream>
#include<string>
#include"financialManager.h"
financialManager::financialManager(int id, string name, int deptId) {
	this->id = id;
	this->name = name;
	this->deptId = deptId;
};
void financialManager::showInfo() {
	cout << "financialManager's Id:" << this->id
		<< "\tfinancialManager's name:" << this->name
		<< "\tfinancialManager's Department:" << this->getDeptName() << endl;
}
string financialManager::getDeptName() {
	return string("Manager");
}