#include<iostream>
#include<set>
int main()
{/*
	std::set<int>s;
	
	std::pair<std::set<int>::iterator, bool>ret = s.insert(10);
	if (ret.second)
	{
		std::cout << "插入成功" << std::endl;
	}
	else
	{
		std::cout << "插入失败" << std::endl;
	}*/
	std::multiset<int>multiset;


	multiset.insert(10);
	multiset.insert(10);
	auto begin = multiset.begin();
	for (begin;begin!=multiset.end(); begin++)
	{
		std::cout << *begin<<" ";
		if (begin==multiset.end())
		{
			std::cout << *begin <<" ";
		}
		
	}
	std::cout << ",打印完了";
}