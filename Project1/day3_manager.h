#pragma once
#include<iostream>
#include"worker.h"
#include<fstream>
#define FileName "empFile.txt"
using namespace std;

class workerManager {
public:
	int empNum ;
	//员工数组，由于work指向的子对象返回的是worker的指针，所以需要用一个指针数组指向这些worker指针
	bool m_FileIsEmpty;
	worker** workerArray;
	//构造函数
	workerManager();
	//展示菜单方法
	void showMenu();
	//退出程序方法
	void exitTheSystem();
	//添加元素方法
	void addEmp();
	//保存方法
	void save();
	//析构
	~workerManager();
	
};