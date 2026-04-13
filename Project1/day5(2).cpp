#include<iostream>
#include<vector>
#include<deque>
#include<ctime>
#include<algorithm>
class team{
public:
	//年龄
	int age;
	//姓名
	std::string name;
	//得分
	int score;
	//构造方法
	team(int age,std::string name,int score)
	{
		this->age = age;
		this->name = name;
		this->score = score;

	}

};
//创建选手对象
//步骤：1.创建vector容器，类型为team，string数组，存入五个字符串，再在此基础上，对team对象进行初始化，存入vector容器里
void createPerson(std::vector<team>&v)
{	
	//姓名种子
	std::string nameseed[]={"隼扬","克兰","沙鲁","量子","小森"};
	for (int i = 0; i <  sizeof(nameseed)/sizeof(nameseed[0]); ++i)
	{
		std::string number;
		number = nameseed[i];
		int score = 0;
		int age = 0;
		//team对象的初始化
		team p(age, number, score);
		//初始化后将p添加到vector容器当中
		v.push_back(p);
		
	}
}
//生成分数的方法。
//1.创建deque对象，在team类型的deque对象里添加随机的分数score，将其添加到deque容器当中
//2.对deque容器的分数大小进行排序，去除最高分和最低分
//3.计算每个人的平均分
void setScore(std::vector<team>&v)
{
	for (std::vector<team>::iterator it = v.begin();it!=v.end();it++)
	{	//创建deque容器
		std::deque<int>d;
		for (int i = 0; i < 10; ++i)
		{	
			//随机分数，将分数放入deque d容器中
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		//对分数容器进行排序
		std::sort(d.begin(), d.end());
		//删除最高分和最低分
		d.pop_back();
		d.pop_front();
		//初始化总分
		int sum = 0;
		//用deque d的迭代器遍历每个分数，进行sum的累加
		for (std::deque<int>::iterator begin = d.begin();begin!=d.end();begin++)
		{
		
			sum +=  *begin;

		}
		//平均分计算
		int avg = sum / d.size();
		it->score = avg;



	}
}
//打印学生的分数信息
void showScore(std::vector<team>&v)
{
	
	for (std::vector<team>::iterator begin = v.begin();begin!=v.end();begin++)
	{
		std::cout << "name:" << begin->name << ",average:" << begin->score<<std::endl;
	}

}
int main(){
	srand((unsigned int)time(NULL));
	std::vector<team>v;
	createPerson(v);
	setScore(v);
	showScore(v);

}