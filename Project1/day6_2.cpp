#include<iostream>
#include<list>
class Person
{
public:
	Person()
	{
		
	}
	Person(std::string name,int age,int height)
	{
		m_age = age;
		m_height = height;
		m_name = name;
	}
	

public:
	std::string m_name;
	int m_age;
	int m_height;
};
bool CompareThePerson(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age) {
		return p1.m_height > p2.m_height;
	}
	else
	{
		return  p1.m_age < p2.m_age;
	}
}
//int main()
//{
//	Person p1("沙鲁", 21, 160);
//	Person p2("隼", 26, 178);
//	Person p3("量子", 19, 178);
//	Person p4("未来的克兰", 39, 183);
//	Person p5("克兰", 19, 183);
//	std::list<Person>l1;
//	l1.push_back(p1);
//	l1.push_back(p2);
//	l1.push_back(p3);
//	l1.push_back(p4);
//	l1.push_back(p5);
//	l1.sort(CompareThePerson);
//	for (std::list<Person>::iterator it = l1.begin(); it != l1.end(); it++)
//	{
//		std::cout << "\t姓名： " << it->m_name << " \t年龄： " << it->m_age
//			<< " \t身高： " << it->m_height << std::endl;
//	}
//}
