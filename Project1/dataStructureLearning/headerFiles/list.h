#pragma once
#include<iostream>
template<typename dataType>
class node {
public:
	dataType data;
	node* next;

	node(const dataType val) :data(val), next{nullptr} {}
};
template<typename dataType>
class list {
	node<dataType>* head;
public:
	list() :head(nullptr) ;
	void append(const dataType& val);
		
	
};