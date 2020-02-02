/*
Author: Haonan Hu
File: executive.cpp
Date:2/20/2019
Brief:File is cpp file
*/

#include "executive.h"
#include "Linked_list.h"
#include <stdexcept>
#include <iostream>
using namespace std;

void executive::run()
{
  // for(int i = 1; i <= 7; i++) //test insert
  // {
  //   myList.Insert(i);
  // }
  // myList.print();


  myList.Insert(1);
  myList.Insert(2);
  myList.Insert(23);
  myList.Insert(1);
  myList.Insert(23);
  myList.Insert(2);
  myList.Insert(32);
  myList.Insert(1);
  myList.Insert(2);
  myList.Insert(23);
  myList.print();
  myList.Delete(23);
  myList.print();
  myList.Delete(23);
  myList.print();
  myList.Delete(23);
  myList.print();
  myList.DeleteDuplicates();
  myList.print();
  if(myList.Find(2) == true)
  {
    cout << "Found\n";
  }
  myList.FindNext(32);
  myList.FindNext(2);
  myList.FindNext(1);
}
