#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printVector(std::vector<int>&v) {
	for (std::vector<int>::iterator it = v.begin();it != v.end();it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
void addMethod(std::vector<int>& v) {
	for (int i = 1; i <= 10; i++)
	{
		v.push_back(i);
	}
}
void minusMethod(std::vector<int>& v) {
	for (int i = 10; i > 0; i--)
	{
		v.push_back(i);
	}
}
//int main() {
//	std::vector<int>v;
	/*for (int i = 1; i <= 100; i++)
	{
		v.push_back(i);
	}*/
//	std::vector<int>v2;
//	v2 = v;
//	printVector(v2);
//	std::vector<int>v3;
//	v3.assign(v.begin(), v.end());
//	printVector(v3);
//	
//	std::cout << "the capacity of this vector:" << v3.capacity()<<std::endl;
//	std::cout << "running the poping part..." <<std:: endl;
//	v3.pop_back();
//	printVector(v3);
//	v3.insert(v3.begin(),2, 100);
//	printVector(v3);
//	v3.erase(v3.begin());
//	printVector(v3);
//
//
//	std::cin.get();
//}
//int main() {
//	/*std::vector<int>v;
//	addMethod(v);
//	std::vector<int>v1;
//	minusMethod(v1);
//	std::cout << "v's content:";
//	printVector(v);
//	std::cout << "v1's content:";
//	printVector(v1);
//	std::cout << "----------------" << std::endl;
//	std::cout << "after exchanging:" << std::endl;
//	v.swap(v1);
//	std::cout << "v's content:";
//	printVector(v);
//	std::cout << "v1's content:";
//	printVector(v1);*/
//	/*vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}*/
//
//	//cout << "v的容量为：" << v.capacity() << endl;
//	//cout << "v的大小为：" << v.size() << endl;
//
//	//v.resize(3);
//
//	//cout << "v的容量为：" << v.capacity() << endl;
//	//cout << "v的大小为：" << v.size() << endl;
//	////收缩内存
//
//	//vector<int>(v).swap(v); //匿名对象
//
//	//cout << "v的容量为：" << v.capacity() << endl;
//	//cout << "v的大小为：" << v.size() << endl;
//	//v.reserve(1000000);
//	vector<int>v;
//	v.reserve(10);
//	for (int i = 0; i < 9; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v's capacity:" << v.capacity() << ",v's size:" << v.size() << endl;
//	v.resize(5);
//
//	vector<int>(v).swap(v);
//	cout << "v's capacity:" << v.capacity() << ",v's size:" << v.size() << endl;
//
//}
