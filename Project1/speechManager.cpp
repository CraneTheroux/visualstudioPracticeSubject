#include<iostream>
#include<vector>
#include"speaker.h"
#include"speechMananger.h"

speechManager::speechManager()
{
	
}

void speechManager::showMenu()
{
    std::cout << "************************************************" << std::endl;
    std::cout << "***************** Welcome to the Speech Contest *****************" << std::endl;
    std::cout << "***************** 1. Start the Speech Contest    *****************" << std::endl;
    std::cout << "***************** 2. View Past Contest Records   *****************" << std::endl;
    std::cout << "***************** 3. Clear Contest Records       *****************" << std::endl;
    std::cout << "***************** 0. Exit the Program            *****************" << std::endl;
    std::cout << "************************************************" << std::endl;
    std::cout << std::endl;
}

void speechManager::exitTheSystem()
{
    std::cout << "you select the exit programme";
    system("cls");
}

speechManager::~speechManager()
{
	
}

void speechManager::initalizeTheMenu()
{
	//初始化容器
    this->vFirst.clear();
    this->vSecond.clear();
    this->vThird.clear();
    this->mFinal.clear();

    //初始化比赛场数
    this->count = 1;
}
