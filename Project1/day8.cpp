#include <iostream>
#include<map>
#include<set>
class compare
{
public:
	bool operator()(const int val1, const int val2)const
	{
		return val1>val2;
	}
};
int main()
{
	std::pair<std::string, int>p;
	std::map<int,std::string>m;
	m.insert(std::pair<int,std::string>(19,"crane"));
	m.insert(std::pair<int,std::string>(18,"sun"));

	std::map<int, std::string>::iterator begin1 = m.begin();
	for (begin1;begin1!=m.end(); begin1++)
	{
		std::cout << begin1->first << ", "<<begin1->second<<" ";
	}
}