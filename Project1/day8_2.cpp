#include<iostream>
#define MAX 10
#include<map>
#include<vector>


int main()
{
	std::vector<std::string>number;
	for (int i = 0; i < MAX; i++)
	{
		std::string str = "ABCDEFGHIJ";
		std::string temp (1,str[i]);
		number.push_back(temp);
	}
	for (std::vector<std::string>::iterator it = number.begin();it!=number.end()  ; it++)
	{
		std::cout << *it<<" ";
	}

}