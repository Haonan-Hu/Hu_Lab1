/*
Author: Haonan Hu
File: executive.h
Date:2/20/2019
Brief:File is header file
*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Linked_list.h"
#include <fstream>
using namespace std;

class executive
{
public:
  executive(string fileName);
  LinkedList myList;
  /**
  * @pre none
  * @post run the user controled panel
  */
  void run();
};
#endif
