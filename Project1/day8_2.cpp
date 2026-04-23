#include<iostream>
#define MAX 10
#include<map>
#include<vector>
#include<ctime>
//定义三个部门的宏量
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
//定义一个worker类，包含姓名和工资
class worker
{
public:
	int m_salary;
	std::string name;
};
void nameset( std::vector<worker>&number)
//随机取名，随机工资
{

	for (int i = 0; i < MAX; i++)
	{
		worker worker1;
		std::string str = "ABCDEFGHIJ";
		worker1.name = str[i];
		worker1.m_salary = rand() % 5000 + 1000;
		number.push_back(worker1);
	}
}
void randomDepartmentInformation(std::vector<worker>&v,std::multimap<int,worker>&m)
//对10个员工进行分组。
{
	
	for (std::vector<worker>::iterator it =v.begin();it!=v.end();it++)
		//用指针遍历每一个员工，给他们添加0-2之间的随机数，也就是上面提到的三个随机部门，然后放到multimap中
	{
		int r = rand() % 3 ;
		m.insert(std::make_pair(r, *it));

	}
}
void showTheGroup(std::multimap<int,worker>m)
//展示员工信息
{	
	//创建员工multimap的指针，并寻找int数字为0的人
	std::multimap<int, worker>::iterator pos = m.find(CEHUA);
	//统计数字为0，部门为策划的总人数
	int count = m.count(CEHUA);
	//计数器，用来进行循环次数限制
	int index = 0;
	for (;pos!=m.end()&&index<count;pos++,index++)
	{
		std::cout << "name:" << pos->second.name << ",salary:" << pos->second.m_salary<<std::endl;
	}

	std::cout << "--------------------ArtDepartment-------------------" << std::endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (;pos != m.end() && index < count;pos++, index++)
	{
		std::cout << "name:" << pos->second.name << ",salary:" << pos->second.m_salary << std::endl;
	}
	std::cout << "----------------------engineerDepartment---------------" << std::endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (;pos != m.end() && index < count;pos++, index++)
	{
		std::cout << "name:" << pos->second.name << ",salary:" << pos->second.m_salary << std::endl;
	}

}
//int main()
//{
//	//创建员工类
//	worker worker1;
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//创建员工姓名和工资的信息类vworker
//	std::vector<worker>vWorker;
//	nameset(vWorker);
//
//	std::multimap<int, worker>m;
//	
//	randomDepartmentInformation(vWorker, m);
//	showTheGroup(m);
//}