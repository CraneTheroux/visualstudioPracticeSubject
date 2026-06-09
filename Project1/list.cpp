#include"list.h"
template<typename dataType>
bool list<dataType>::append(dataType val){
	node<dataType>* p = new node<dataType>(val);
	if (head == nullptr) {
		head = p;
		return true;
	}
	
	node<dataType>* temp1 = head;
	while (temp1->next != nullptr)
	{
		if (temp1->data == val)
		{
			std::cout << "找到重复元素，无法添加" << std::endl;
			delete p;
			return false;
		}
		temp1 = temp1->next;
	}
	temp1->next = p;
	return true;
}

template <typename dataType>
bool list<dataType>::deleteTheElement(dataType val)
{
	return false;
}

template<typename dataType>
void list<dataType>::printTheList()
{
	node<dataType>* p = head;
	while (p != nullptr)
	{
		std::cout << p->data << " ";
		p = p->next;
	}
	
}
