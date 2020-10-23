#pragma once
#ifndef LIST_HPP
#define LIST_HPP

class List
{
private:
	int m_data;

	typedef struct node
	{
		int data;
		node* next;
	}*nodePtr;

	nodePtr head, curr, temp;

public:	
	List()
	{
		head = NULL;
		curr = NULL;
		temp = NULL;
	}
	
	//int data() const;
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();
};


#endif // !LIST_HPP
