#include<iostream>
#include<vector>
#define MAX 100
#include<algorithm>
class MyFindMethod {
	
public:
	int operator()(int val)
	{
		int temp = val * val;
		return  temp == val * 2;
	}
};
void initalize(std::vector<int>&v)
{
	for (int i = 0; i < MAX; ++i)
	{
		v.push_back(i);
	}
	for (std::vector<int>::iterator it  = v.begin();it!=v.end();it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
//int main()
//{
//
//	std::vector<int>v;
//	initalize(v);
//
//		std::vector<int>::iterator it = std::find_if(v.begin(), v.end(), MyFindMethod());
//		while (true)
//		{
//			// 从当前 it 位置开始找
//			it = find_if(it, v.end(), MyFindMethod());
//
//			if (it == v.end())
//				break; // 找不到了，退出循环
//
//			std::cout << *it << " "; // 输出找到的数
//			it++; // 关键！从下一个位置继续找
//		}
//
//		if (v.begin() == v.end())
//			std::cout << "can't find the result";
//		
//	}
