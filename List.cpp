//#include <cstdlib>
#include <iostream>
#include "List.hpp"
#include "List.h"

//List::List(int data) : m_data(data) {}
//
//int List::data() const {
//	return m_data;
//}

void List::AddNode(int addData) 
{
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;

	if (head != NULL) 
	{
		curr = head;

		while (curr->next != NULL) 
		{
			curr = curr->next;
		}
		curr->next = n;	
	}
	else 
	{
		head = n;
	}
}

void List::DeleteNode(int delData) 
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;

	while (curr != NULL && curr->data!=delData) 
	{
		temp = curr;
		curr = curr->next;
	}

	if (curr == NULL)
	{
		std::cout << delData << "was not here" << std::endl;
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		std::cout << "The value " << delData << " was deleted." << std::endl;
	}
}

void List::PrintList()
{
	curr = head;

	while (curr != NULL)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

extern "C"
{
	void AddNode_C(const list_t c, int addData_C)
	{
		reinterpret_cast<List*>(c.obj)->AddNode(addData_C);
	}

	//void DeleteNode_C(int delData_C)
	//{
	//	List list;
	//	list.DeleteNode(delData_C);
	//}

	//void PrintList_C()
	//{
	//	List list;
	//	list.PrintList();
	//}
}