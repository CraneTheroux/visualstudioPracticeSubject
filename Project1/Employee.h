#include<iostream>
#include<string>
#include"worker.h"
using namespace std;
class employee :public worker {
public:
	employee(int id, string name, int deptId);
	virtual void showInfo() ;
	virtual string getDeptName() ;

};