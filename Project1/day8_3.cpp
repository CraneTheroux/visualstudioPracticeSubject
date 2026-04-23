#include<iostream>
#include<functional>

class test
{
	public:

	int operator()(int val1,int val2)const
	{
		return val1 - val2;
	}
};

//int main()
//{
//	
//	
//	
//	
//	std::cout <<test()(50,10)<< std::endl;
//}