/*
Author: Haonan Hu
File: Linked_list.cpp
Date:1/30/2020
Brief:File is cpp file
*/
#include "Node.h"
#include "Linked_list.h"
#include <stdexcept>
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	m_front = nullptr;
	m_length = 0;
}

LinkedList::~LinkedList() //destructor
{

}

bool LinkedList::IsEmpty()const	//check if the linkedlist is empty
{
	if(m_front == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int LinkedList::Length()const //get the current length of the link
{
	return m_length;
}

void LinkedList::Insert(int entry) //insert a new node at given position
{

}

void LinkedList::Delete(int entry)
{

}

void LinkedList::DeleteDuplicates(int entry)
{

}

bool LinkedList::Find(int entry)
{

}

void LinkedList::FindNext(int entry)
{

}

Node LinkedList::getFront()
{
	return *m_front;
}
