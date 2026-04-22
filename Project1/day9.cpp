#include <algorithm>
#include<iostream>
#include<vector>
#include<functional>


class Person
{
public:
	bool operator()(int val1)
	{
		return val1 > 5;
	}
};
struct compare
{
public:
	bool operator()(int val1,int val2){
		return val1 < val2;
	}
};
struct TransFormer
{
	int operator()(int val1)
	{
		return val1;
	}
};
//int main()
//{
//	std::vector<int>v;
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(1);
//	v.push_back(6);
//	
//	std::vector<int>::iterator it = std::find_if(v.begin(), v.end(), Person());
//	if (it == v.end())
//	{
//		std::cout << "can't find the result";
//	}
//	else
//	{
//		std::cout << "result found successfully";
//	}
//	std::cin.get();
//	std::sort(v.begin(), v.end(), compare());
//	for (std::vector<int>::iterator it = v.begin();it!=v.end();it++)
//	{
//		std::cout << *it << " ";
//	}
//	std::vector<int>v2;
//	v2.resize(v.size());
//	std::transform(v.begin(), v.end(), v2.begin(), TransFormer());
//	for (std::vector<int>::iterator it = v2.begin();it != v2.end();it++)
//	{
//		std::cout << *it << " ";
//	}
//}