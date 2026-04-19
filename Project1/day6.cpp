#include<iostream>
#include<stack>
#include<queue>
#include<list>
#define MAX 100
void printTheList( std::list<int>&l)
{
	for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		std::cout << *it << " ";
		
	}
}
void pushBackTheListInReverse(std::list<int>&l)
{
	for (int i = MAX;i>0; i--)
	{
		l.push_back(i);
	}
}
//int main()
//{
//	
//	
//	std::list<int>l1;
//	for (int i = 0; i < MAX; ++i)
//	{
//		l1.push_back(i);
//
//	}
//	
//	//std::list<int>l3 = l2;
//	std::list<int>l4;
//	l4.assign(l1.begin(), l1.end());
//	std::cout << "before erase:";
//	printTheList(l4);
//	std::cout << "-------------------------------------------------------------------" << std::endl;
//	std::list<int>::iterator begin= l4.begin();
//	std::list<int>::iterator end = l4.end();
//	auto begin1 = l4.erase(++begin, end);
//	printTheList(l4);
//	l4.insert(begin1, 5, 10);
//	printTheList(l4);
//	std::list<int>l5;
//	pushBackTheListInReverse(l5);
//	printTheList(l5);
//	std::cout << "------------------------after sort---------------------------------------------------------" << std::endl;
//	l5.sort();
//	printTheList(l5);
//
//}