/*
Author: Haonan Hu
File: Linked_list.h
Date:1/30/2020
Brief:File is header file
*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"
#include <stdexcept> //for runtime_error


class LinkedList
{
	private:
	Node* m_front;
	int m_length;
	Node* targetNode(int position)const;

	public:
	/**
	* @pre none
	*	@post creates an empty list
	*/
	LinkedList();
	/**
	* @pre none
	* @post deletes all nodes in the list that created before
	* @return none
	*/
	~LinkedList();
	/**
	* @pre none
	* @post verify the list is empty or not
	*	return true if the list is empty
	*/
	bool IsEmpty() const;
	/**
	* @pre none
	* @post get the length of the linkedlist
	* @return the linkedlist length
	*/
	int Length()const;
	/**
	* @post insert a new item at the front of list
	* @param entry, the value of the insert item
	* @return none
	*/
	void Insert(int entry);
	/**
	* @pre the entry is in the list
	* @post deletes the entry
	* @param postion,the position that remove a new item
	* @return none
	*/
	void Delete(int entry);
	/**
	* @pre the entry is in the list
	* @post deletes the entry
	* @param postion,the position that remove a new item
	* @return none
	*/
	void DeleteDuplicates();
	/**
	* @pre the entry is in the list
	* @post deletes the entry
	* @param postion,the position that remove a new item
	* @return none
	*/
	bool Find(int entry);
	/**
	* @pre the entry is in the list
	* @post deletes the entry
	* @param postion,the position that remove a new item
	* @return none
	*/
	void FindNext(int entry);
	/**
	* @pre none
	* @post get the front node pointer
	* @return the front node pointer
	*/
	Node* getFront()const;
	void print();
};
#endif
