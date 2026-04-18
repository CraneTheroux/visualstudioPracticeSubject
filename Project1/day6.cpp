#include<iostream>
#include<stack>
#include<queue>
#include<list>
#define MAX 100
int main()
{
	
	
	std::list<int>l1;
	for (int i = 0; i < MAX; ++i)
	{
		l1.push_back(i);

	}
	for (std::list<int>::iterator it = l1.begin(); it!=l1.end(); it++)
	{
		std::cout << *it<< " ";
	}

	std::list<int>l2;
	for (int i = 0; i < MAX; ++i)
	{
		l2.push_front(i);
	}
	std::cout << "-----------------------------------------" << std::endl;
	for (std::list<int>::iterator it = l2.begin(); it != l2.end(); it++)
	{
		std::cout << *it << " ";
	}
	
	

}