#pragma once
#include<iostream>
#include<string>
#include<random>
#include"speaker.h"
#include<vector>
#include<map>
#include<fstream>
class speechManager
{
public:
	//构造函数
	speechManager();
	void initalizeTheMenu();
	//展示界面方法
	void showMenu();
	//退出系统方法
	void exitTheSystem();


	//析构函数
	~speechManager();
	//选手姓名生成器
	void createTheName();
	//比赛框架
	void SpeechContest();
	//抽签函数
	void speechDraw();
	//第一轮选手名单编号
	std::vector<int>vFirst;
	//第二轮选手编号名单
	std::vector<int>vSecond;
	//冠军容器
	std::vector<int>vVictory;
	//比赛开始方法
	void speechStart();
	//保存文件方法
	void saveTheFiles();
	//清空文件方法
	void clearTheFiles();
	//浏览文件方法
	void readTheFiles();
	
	//展示晋级结果
	void showScore();
	//编号与对应选手容器
	std::map<int,speaker>mMenu;
	//存放比赛轮数变量
	int count;
	//默认的文件逻辑判断
	bool fileIsEmpty = true;
	
};