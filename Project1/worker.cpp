#include<iostream>
#include<string>
#include"worker.h"
worker::worker(int id, string name, int DeptID) {
	this->worker_id = id;
	this->worker_name = name;
	this->DepartmentId = DeptID;
}
void worker::workShowInfo() {
	cout << "worker's name:" << worker_name <<",worker's id:"<<worker_id <<",Department's ID:"<<DepartmentId << endl;
};
string worker::workDeptName() {
	return string("mumber");

}