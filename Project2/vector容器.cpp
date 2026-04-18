//#include<iostream>
//#include<vector>
//#include<algorithm>
//template<typename a>
//void Myprint(a val);
//template<typename a>
//void Myprint(a val) {
//	std::cout << val << std::endl;
//};
//void test01() {
//	std::vector<int>v;
//	//尾插数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//v.begin()指向容器中的第一个元素
//	std::vector<int>::iterator iterator1 = v.begin();
//	std::vector<int>::iterator iterator2 = v.end();
//	//vector遍历方法 1
//	/*while (iterator1 != iterator2) {
//		std::cout << *iterator1 << std::endl;
//		iterator1++;
//	}
//	*/
//	//vector遍历方法2
//	/*for (std::vector<int>::iterator it=v.begin();it != v.end();it++) {
//		std::cout << *it <<std:: endl;
//	}*/
//	for_each(v.begin(), v.end(), Myprint<int>);
//}
//
//int main() {
//	test01();
//}