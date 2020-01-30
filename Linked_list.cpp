/*
Author: Haonan Hu
File: Linked_list.cpp
Date:2/20/2019
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

Node* LinkedList::targetNode(int position)const // get the specific node at the position
{
	int index = 1;
	Node* temp = m_front;
	if(position > m_length || position < 1)
	{
		throw(runtime_error("Invalid"));
	}
	else
	{
		while(index != position)
		{
			temp = temp->getNext();
			index++;
		}
		return temp;
	}
}

LinkedList::LinkedList(const LinkedList& original) //copy constructor
{
	m_length = original.m_length;
 	Node* oriPtr = original.m_front;
	if(oriPtr == nullptr)	//original is empty, so copy is empty
	{
		m_front = nullptr;
	}
	else
	{
		m_front = new Node(0);
		m_front->setEntry(original.getEntry(1)); //copy first node
		Node* newPtr = m_front;	//last node pointer
		oriPtr = oriPtr->getNext();	// advance pointer
		while(m_length != 0)
		{
			int temp = oriPtr->getEntry();
			Node* tempNode = new Node(temp);
			newPtr->setNext(tempNode);
			newPtr = newPtr->getNext();
			oriPtr = oriPtr->getNext();
			m_length++;
		}
		newPtr->setNext(nullptr);
	}
}

LinkedList::~LinkedList() //destructor
{
	clear();
}

LinkedList& LinkedList::operator=(const LinkedList& original)
{
	clear();
	m_length = original.m_length;
 	Node* oriPtr = original.m_front;
	if(oriPtr == nullptr)	//original is empty, so copy is empty
	{
		m_front = nullptr;
	}
	else
	{
		m_front = new Node(0);
		m_front->setEntry(original.getEntry(1)); //copy first node
		Node* newPtr = m_front;	//last node pointer
		oriPtr = oriPtr->getNext();	// advance pointer
		while(m_length != 0)
		{
			int temp = oriPtr->getEntry();
			Node* tempNode = new Node(temp);
			newPtr->setNext(tempNode);
			newPtr = newPtr->getNext();
			oriPtr = oriPtr->getNext();
			m_length++;
		}
		newPtr->setNext(nullptr);
	}
	return (*this);
}

bool LinkedList::isEmpty()const	//check if the linkedlist is empty
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

int LinkedList::getEntry(int position)const
{
	int myEntry;
	myEntry = targetNode(position)->getEntry();
	return myEntry;
}

int LinkedList::getLength()const //get the current length of the link
{
	return m_length;
}

void LinkedList::setLength(int length)
{
	m_length = length;
}
void LinkedList::clear()		//delete all nodes in the link
{
	Node* deletePtr = m_front;
	while(m_front != nullptr)
	{
		m_front = m_front->getNext();
		deletePtr->setNext(nullptr);
		delete deletePtr;
		deletePtr = m_front;
	}
	isEmpty();
	m_length = 0;
}

void LinkedList::insert(int position, int entry) //insert a new node at given position
{
	Node* insert = new Node(entry);
	if(position < 1 || position > m_length)
	{
		throw(runtime_error("Invalid position number"));
	}
	else
	{
		if(position == 1)
		{
			insert->setNext(m_front);
			m_front = insert;
			m_length++;
		}
		else
		{
			Node* prvePtr = targetNode(position - 1);
			insert->setNext(prvePtr->getNext());
			prvePtr->setNext(insert);
			m_length++;
		}
	}
}

void LinkedList::remove(int position) //remove a node from a given position
{
	isEmpty();
	if(isEmpty() == true)
	{
		cout << "The linkedlist is empty \n";
	}
	else
	{
		if(position < 1 || position > m_length)
		{
			throw(runtime_error("Invalid position"));
		}
		else
		{
			Node* removeCur = nullptr;
			if(position == 1)
			{
				removeCur = m_front;
				m_front = m_front->getNext();
			}
			else
			{
				Node* removePuv = targetNode(position - 1);
				removeCur = removePuv->getNext();
				removePuv->setNext(removeCur->getNext());
			}
			removeCur->setNext(nullptr);
			delete removeCur;
			m_length--;
		}
	}
}

void LinkedList::replace(int position, int newEntry)
{
	Node* replace = new Node(newEntry);
	if(position < 1 || position > m_length)
	{
		throw(runtime_error("Invalid position"));
	}
	else if(m_length == 0)
	{
		cout << "The list is empty.\n";
		delete replace;
	}
	else if(m_length == 1)
	{
		m_front = replace;
	}
	else
	{
		targetNode(position - 1)->setNext(replace);
		replace->setNext(targetNode(position + 1));
		delete targetNode(position);
	}
}

Node LinkedList::getFront()
{
	return *m_front;
}

void LinkedList::setFront(Node* front)
{
	m_front = front;
}

void LinkedList::addFront(int entry)
{
	if(m_length == 0)
	{
		m_front = new Node(entry);
	}
	else
	{
		Node* temp = new Node(entry);
		temp->setNext(m_front);
		m_front = temp;
	}
	m_length++;
}

void LinkedList::addBack(int entry)
{
	if(m_length == 0)
	{
		m_front = new Node(entry);
	}
	else
	{
		Node* temp = new Node(entry);
		while( m_front->getNext() != nullptr)
    {
			m_front = m_front->getNext();
		}
		 m_front->setNext(temp);
	}
	m_length++;
}
