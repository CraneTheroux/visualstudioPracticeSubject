#include<iostream>
#include<vector>
#include<algorithm>
template<typename a>
void printVector(a val) {
	std::cout << val<<" ";
}
int main() {
	std::vector<int> v(5,10);
	std::vector<int>::iterator  begin= v.begin();
	std::vector<int>::iterator end = v.end();
	for_each(begin, end, printVector<int>);
	std::vector<int>v2(begin,end);
	std::cout << v2.capacity() << std::endl;
}