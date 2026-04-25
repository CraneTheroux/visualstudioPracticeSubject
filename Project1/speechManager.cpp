#include<iostream>
#include<vector>
#include"speaker.h"
#include"speechMananger.h"
#include<algorithm>
#include<ctime>
#include<random>

speechManager::speechManager()
{
    this->initalizeTheMenu();
    this->createTheName();

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
void speechManager::createTheName()
{   //姓名种子
    std::string nameseed = "ABCDEFGHIJKLMN";
    
    for (int i =0;i<nameseed.size();i++)
    {
        std::string name = "speaker";
        name += name + nameseed[i];
        speaker sp;
        
        sp.m_name = name;
        //初始化对象的分数
        for (int j = 0; j < 2; ++j)
        {
            sp.m_score[j] = 0;
        }
        this->vFirst.push_back(i + 10001);
        //最终名单：参数1，选手编号，以及相关的sp对象。
        this->mFinal.insert(std::make_pair(i+10001,sp));
    }
}

void speechManager::startTheSpeech()
{
	//第一轮比赛
    



    //抽签
    this->speechDraw();





    //比赛





    //显示结果




    //第二轮比赛


     //抽签






    //比赛





    //显示结果



     //最后一轮比赛


     
	
	
	//抽签






    //比赛





    //显示结果




}
void speechManager::speechDraw()
{   
    std::mt19937 g((unsigned int)time(NULL));
   

    std::cout << "the "<<this->count<<" round's compatitor are drawing the order..." << std::endl;

    std::cout << "the results:" << std::endl;
    if (count ==1)
    {
        std::shuffle(vFirst.begin(), vFirst.end(),g);
        for (std::vector<int>::iterator it = vFirst.begin();it != vFirst.end();it++) {
            std::cout << *it << " ";
        }
        
    }else
    {
        std::shuffle(vSecond.begin(), vSecond.end(), g);
        for (std::vector<int>::iterator it = vSecond.begin();it != vSecond.end();it++) {
            std::cout << *it << std::endl;
        }

        std::cout << "---------------------------------------" << std::endl;
        
    }
    std::cin.get();
    std::cout << std::endl;

};
