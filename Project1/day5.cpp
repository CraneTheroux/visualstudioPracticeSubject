#include<iostream>
#include <valarray>
#include<vector>
#include<deque>
#include<algorithm>
void test01(const std:: deque<int>&d){
	std::deque<int>::const_iterator it = d.begin();
	std::deque<int>::const_iterator end = d.end();
	for (it; it!=end; it++)
	{
		std::cout << *it<<" ";
	}	

}

//int main()
//{
//	std::deque<int> deqT;
//	for (int i = 0; i <= 100; ++i)
//	{
//		deqT.push_back(i);
//	}
//	for (int i = 100; i >0; i--)
//	{
//		deqT.push_front(i);
//	}
//	std::deque<int>d2(deqT.begin(), deqT.end());
//	std::sort(deqT.begin(), deqT.end());
//
//
//
//
//
//	test01(deqT);
//
//
//}