#include<iostream>
#include<deque>
#define MAX 100
using namespace std;
void printTheDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin();it != d.end(); it++)
	{
		cout << *it << " ";
	}
}
//int main() {
//	cout << "have a try man" << endl;
//	deque<int>d;
//	for (int i = 0; i < MAX; ++i)
//	{
//		d.push_back(i);
//	}
//	printTheDeque(d);
//}

