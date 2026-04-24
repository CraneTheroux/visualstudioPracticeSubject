#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include<random>
#define MAX 10
class myPrint
{	
	public:
	void operator()(int val1)
	{
		std::cout << val1 << " ";
	}
};
class TheNumGreaterThan5
{
public:
	int operator()(int val1)
	{
		return val1 > 5;
	}
};

void test01(){
srand((unsigned int)time(NULL));
	std::vector<int>v;
	for (int i = 0; i < 10;i++)
	{
		v.push_back(i);
	}
	std::for_each(v.begin(), v.end(), myPrint());
	std::cout << std::endl;
	std::shuffle(v.begin(), v.end(), std::mt19937((unsigned int)time(NULL)));
	std::for_each(v.begin(), v.end(), myPrint());
}
void test02(std::vector<int>&v,std::vector<int>&v1)
{
	std::vector<int>::iterator it = v.begin();
	std::vector<int>::iterator itEnd = v.end();
	std::copy(it, itEnd, v1.begin());

}

int main()
{
	/*std::mt19937 g((unsigned int)time(NULL));
	std::uniform_int_distribution<int>dist(1, 100);
	int a = dist(g);
	std::cout << a;*/
	
	//std::vector<int>v;
	//for (int i = 0; i < 10;i++)
	//{
	//	v.push_back(i);
	//}
	////利用copy算法时，新容器要先开辟空间，否则会报错。

	//std::vector<int>v1;
	//v1.resize(v.size());
	//test02(v, v1);
	//std::for_each(v1.begin(), v1.end(), myPrint());
	std::vector<int>v;
	for (int i = 0; i < MAX; ++i)
	{
		v.push_back(i);
	}
	//v.push_back(0);
	//std::cout << "before the changing:";
	//std::for_each(v.begin(), v.end(), myPrint());
	//std::cout <<"after replacement:" <<std::endl;
	////replace方法，从0开始到vector容器结束，将0替换成100
	//std::replace(v.begin(), v.end(), 0, 100);
	//
	//std::for_each(v.begin(), v.end(), myPrint());
	////replace_if方法，将指定的heNumGreaterThan5()，依据规则与要求替换数字
	//std::replace_if(v.begin(), v.end(), TheNumGreaterThan5(), 1000);
	//std::cout << "after the conditional replacement:" << std::endl;
	//std::for_each(v.begin(), v.end(), myPrint());


}