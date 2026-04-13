#include <iostream>
#include <vector>
template<typename n>
n counting(n num)
{
	return num ;
}
class Person
{
	int num;
	
public:
	Person()
	{
		
	}
	
	Person(int num)
	{
		this->num = num;
	}
	Person operator+(Person&p2)
	{
		Person temp ;
		temp.num = this->num + p2.num;
		return temp;
	}
	int getResult()
	{
		return num ;
	}
};

//int main()
//{
//	std::vector<int>v;
//	for (int i = 0; i <= 100; ++i)
//	{
//		v.push_back(i);
//	}
//	std::cout << "start print the result...." << std::endl;
//	for (std::vector<int>::iterator it =v.begin();it!=v.end();it++)
//	{
//		std::cout << *it << " ";
//	}
//	std::cout << "--------------------" << std::endl;
//	Person p1(10);
//	Person p2(20);
//	Person p3 = p1 + p2;
//	std::cout <<p3.getResult() ;
//}
