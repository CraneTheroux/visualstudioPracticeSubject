#include<iostream>
using namespace std;
class function {
	//有元函数，保证左移函数能访问对象中的成员
	friend ostream& operator<<(ostream& cout, function& f);
	//成员age
	int *age;
public:
	function() {
		//如果是指针的话，初始化时一定要滞空指针，要不然会变成野指针
		this->age = nullptr;
	}
	//调用有参构造
	function(const int &age) {

		this->age = new int(age);

	}
	//减法重载
	function operator-(const function&f) {
		function temp;
		//对指针进行判断，如果为空指针就赋值为零
		int val_this = (this->age != nullptr) ? *this->age : 0;
		int val_f = (f.age != nullptr) ? *f.age : 0;
		int result = val_this-val_f;
		return function(result);
	}
	//function operator=(const function& f) {
	//	function temp;
	//	//对指针进行判断，如果为空指针就赋值为零
	//	int val_this = (this->age != nullptr) ? *this->age : 0;
	//	int val_f = (f.age != nullptr) ? *f.age : 0;
	//	
	//}

	~function() {
		if (age != nullptr) {
			delete age;
			age = nullptr;
		}
	}

};
ostream& operator<<(ostream& cout, function& f) {
	if (f.age == nullptr) {
		cout << "当前年龄为空指针" << endl;
	}else{
		cout << *f.age;
		return cout;
	}
	
}
//int main() {
//	system("chcp 936");
//	function f1(10);
//	function f2(20);
//	function f3 = f2-f1;
//	cout << "年龄为" << f3;
//	f3 = f1;
//
//	cout << f3;
//
//
//
//}
