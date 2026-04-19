#include<iostream>
#include<set>

//int main()
//{
//	
//	std::set<int>s1;
//	//s1的insert函数会返回插入结果，表示插入是否成功
//	s1.insert(10);
//	s1.insert(5);
//	s1.insert(1);
//	s1.insert(1);
//	std::cout << s1.size()<<std::endl;
//	std::set<int>::iterator begin = s1.find(1);
//	if (begin!=s1.end())
//	{	
//		//如果begin指针没有走到s1的尾指针,说明找到了元素 
//		std::cout << "找到了元素:" << *begin << std::endl;
//
//	}else
//	{
//		std::cout << "元素失踪！" << std::endl;
//	}
//	//count用来反应set二叉树中该元素的出现次数，但set函数中不允许出现重复元素，所以只有两种结果：0和1
//	int num = s1.count(6);
//	std::cout << num;
//
//}