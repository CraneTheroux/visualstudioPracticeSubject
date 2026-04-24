#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include<random>
class myPrint
{	
	public:
	void operator()(int val1)
	{
		std::cout << val1 << " ";
	}
};

int main()
{
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