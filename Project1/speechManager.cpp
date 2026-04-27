#include<iostream>
#include<vector>
#include"speaker.h"
#include"speechMananger.h"
#include<algorithm>
#include<ctime>
#include<random>
#include<deque>
#include <numeric>

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
    this->vVictory.clear();
    this->mMenu.clear();

    //初始化比赛场数
    this->count = 1;
}
void speechManager::createTheName()
{   //姓名种子
    std::string nameseed = "ABCDEFGHIJKLMN";
    
    for (int i =0;i<nameseed.size();i++)
    {
        std::string name = "speaker";
        name += nameseed[i];
        speaker sp;
        
        sp.m_name = name;
        //初始化对象的分数
        for (int j = 0; j < 2; ++j)
        {
            sp.m_score[j] = 0;
        }
        this->vFirst.push_back(i + 10001);
        //最终名单：参数1，选手编号，以及相关的sp对象。
        this->mMenu.insert(std::make_pair(i+10001,sp));
    }
}

void speechManager::startTheSpeech()
{
    std::multimap<double, int>groupScores;
	//第一轮比赛
    std::vector<int>vmatches;
    //如果是第一轮，将vFirst数组放入比赛数组当中
    if (this->count==1)
    {
        
        vmatches = vFirst;
    }
    else
    {
        vmatches = vSecond;
    }



    //抽签
    this->speechDraw();





    //比赛
    //遍历每一个选手,评委进行打分，因为要去掉最高分和最低分再进行平均值运算，而deque容器对于vector的优势就在于此，所以选取deque容器
    //将随机数生成器放在循环外部，避免同一秒内生成相同随机数
    std::mt19937 g((unsigned int)time(NULL));
    std::uniform_int_distribution<>dist(60, 100);
    int num = 0;
	for (std::vector<int>::iterator it = vmatches.begin();it!=vmatches.end();it++)
	{
        //评委进行打分
        std::deque<int>Mscore;  // 每个选手独立创建，自动清空上一轮数据
        for (int i = 0;i<14;i++)
        {
            double score = dist(g) / 1.0f;
            Mscore.push_back(score);
        }
        //添加分数后对分数进行自动从高到低排序
        std::sort(Mscore.begin(), Mscore.end(), std::greater<>());
        //去掉最高分和最低分
        Mscore.pop_back();
        Mscore.pop_front();
        //计算每个人的总分
        double sum = std::accumulate(Mscore.begin(), Mscore.end(), 0.0f);
        //计算平均分
        double avg = sum / (double)Mscore.size();
        //将平均分存入mMenu中，mMenu属于speaker对象；
        this->mMenu[*it].m_score[count - 1] = avg;

        //创建一个multimap，存入小组的分数与序号，*it解出来的引用就是speaker对象
        groupScores.insert(std::make_pair(avg, *it));
        //为了实现分组，定义一个变量num，每次num%7时进行一次分组。
        num++;
        if (num%7==0)
        {
            std::cout << "the " << num/7 << "th rate:" << std::endl;
            //下面的map容器用的是groupScores中的
            for (std::multimap<double,int>::iterator it =groupScores.begin();it!=groupScores.end();it++)
            {
                std::cout << "number" << it->second << ",name " << this->mMenu[it->second].m_name 
            	<< ",score:" << this->mMenu[it->second].m_score[count-1] << std::endl;

            }
            int countNotRound = 0;
            for (std::multimap<double,int>::iterator it = groupScores.begin();it!=groupScores.end()&&countNotRound<3;it++,countNotRound++)
            {
	            if (this->count==1)
	            {
                    vSecond.push_back((*it).second);

	            }
	            else
	            {
                    vVictory.push_back((*it).second);
	            }
            }
            groupScores.clear();
            
        }

	}
    this->count++;
    std::cout << this->count << "th competition completed"<<std::endl;








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
    //c++11后，random_shuffle方法被替换，新的shuffle方法有三个参数，其中两个是容器迭代器，最后一个需要自行定义随机数的种子类型
    //而std::mt19937 g((unsigned int)time(NULL));是更加接近数学模型的随机数种子
    std::mt19937 g((unsigned int)time(NULL));
   
    //抽签开始的程序提示
    std::cout << "the "<<this->count<<" round's compatitor are drawing the order..." << std::endl;
    //公示结果
    std::cout << "the results:" << std::endl;
    //如果比赛轮数是第一轮
    if (count ==1)
    {
        //开始随机，取v1的容器，调用随机数种子进行随机操作
        std::shuffle(vFirst.begin(), vFirst.end(),g);
        //打印最终排序结果
        for (std::vector<int>::iterator it = vFirst.begin();it != vFirst.end();it++) {
            std::cout << *it << " ";
        }
        
    }else
        //如果是第二轮或决赛
    {
        //以下方法与上述类似
        std::shuffle(vSecond.begin(), vSecond.end(), g);
        for (std::vector<int>::iterator it = vSecond.begin();it != vSecond.end();it++) {
            std::cout << *it << std::endl;
        }

        std::cout << "---------------------------------------" << std::endl;
        
    }
    //用户输入任意键，触发下一个程序
    std::cin.get();
    std::cout << std::endl;

};
