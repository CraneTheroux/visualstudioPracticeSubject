#pragma once
#include<iostream>
#include<string>
#include"worker.h"
using namespace std;
class financialManager :public worker {
public:
	//构造函数
		financialManager(int id, string name, int deptId);
		virtual void showInfo() ;
		virtual string getDeptName();
};