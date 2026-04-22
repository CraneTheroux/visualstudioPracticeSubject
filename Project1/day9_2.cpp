#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 10
class Person
{
public:
	int age;
	std::string name;
	Person(int age,std::string name)
	{
		this->age = age;
		this->name = name;
	}
	bool operator==(const Person&p)const
	{
		if (this->name ==p.name&&this->age ==p.age)
		{
			return true;
		}
		return false;
	}

};
std::ostream& operator<<(std::ostream& out, const Person& p)
{
	out << p.age << " ," << p.name;
	return out;
}

void testing(std::vector<Person>&p)
{
	std::vector<Person>::iterator it = std::adjacent_find(p.begin(), p.end());
	if (it==p.end())
	{
		std::cout << "找不到元素！"<<std::endl;

	}
	else
	{
		std::cout << "重复元素为" << *it<< std::endl;
	}
}
std::vector<int> testing2(std::vector<int>&v,std::vector<int>&v2)
{
	for (int i = 0; i < MAX; ++i)
	{
		v.push_back(i);
		v2.push_back(i + 1);
	}
	std::vector<int>vTarget;
	vTarget.resize(v.size() + v2.size());
	std::merge(v.begin(), v.end(), v2.begin(), v2.end(),vTarget.begin());
	return vTarget;
}

int main()
{	
	system("chcp 936");
	std::vector<int>v1;
	std::vector<int>v2;
	/*Person p1(18, "隼");
	Person p2(19, "量子");
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p1);
	v.push_back(p1);*/

	
	
	std::vector<int>vTarget = testing2(v1, v2);
	for (std::vector<int>::iterator it   = vTarget.begin();it!=vTarget.end()  ;it ++)
	{
		std::cout << *it << " ";
	}
	
}