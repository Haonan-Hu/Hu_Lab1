/*
Author: Haonan Hu
File: executive.h
Date:2/20/2019
Brief:File is header file
*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Linked_list.h"
using namespace std;

class executive
{
public:
  LinkedList myList;
  /**
  * @pre none
  * @post run the user controled panel
  */
  void run();

};
#endif
