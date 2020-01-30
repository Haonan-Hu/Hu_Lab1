/*
Author: Haonan Hu
File: Linked_list.h
Date:2/20/2019
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
	* @pre the original list is not empty
	* @post create a deep copy of the constuctor
	*/
	LinkedList(const LinkedList& original);
	/**
	* @pre none
	* @post deletes all nodes in the list that created before
	* @return none
	*/
	~LinkedList();
	/**
	* @pre the list that passed in is not empty
	* @post overloading operator
	* @return none
	*/
	LinkedList& operator=(const LinkedList& original);
	/**
	* @pre none
	* @post verify the list is empty or not
	*	return true if the list is empty
	*/
	bool isEmpty() const;
	/**
	* @pre none
	* @post get the length of the linkedlist
	* @return the linkedlist length
	*/
	int getLength()const;
	/**
	* @pre none
	* @post get the length of the list
	* @return the length of the list
	*/
	void setLength(int length);
	/**
	* @pre the position passed in within 1 and m_length
	* @post insert a new item at the given postion
	* @param position, the position that insert a new item
	* @param entry, the value of the insert item
	* @return none
	*/
	void insert(int position, int entry);
	/**
	* @pre the position passed in within 1 and m_length
	* @post deletes the node at that position
	* @param postion,the position that remove a new item
	* @return none
	*/
	void remove(int position);
	/**
	* @pre none
	* @post deletes all nodes in the list
	* @return none
	*/
	void clear();
	/**
	* @pre the position passed in within 1 and m_length
	* @post get the entry at a given position
	* @returns the entry at a given position
	* @param position,the position of the item
	*/
	int getEntry(int position)const;
	/**
	* @pre the position passed in within 1 and m_length
	* @post replaces the entry at a given position
	* @return none
	* @param position,the position of the item
	* @param newEntry,the value of the item you want to replace
	*/
	void replace(int position, int newEntry);
	/**
	* @pre none
	* @post get the front node pointer
	* @return the front node pointer
	*/
	Node getFront();
	/**
	* @pre none
	* @post set the front node
	* @return none
	* @param front, the front node that you want to set
	*/
	void setFront(Node* front);
	/**
	* @pre none
	* @post add nodes to the front
	* @return none
	* @param entry, the value of item
	*/
	void addFront(int entry);
	/**
	* @pre none
	* @post add nodes to the back
	* @return none
	* @param entry,the value of item
	*/
	void addBack(int entry); //add nodes to the back
};
#endif
