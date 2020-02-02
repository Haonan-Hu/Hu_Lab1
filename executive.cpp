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
  myList.Print();
  myList.Delete(23);
  myList.Print();
  myList.Delete(23);
  myList.Print();
  myList.DeleteDuplicates();
  myList.Print();
  if(myList.Find(2) == true)
  {
    cout << "Found\n";
  }
  myList.FindNext(32);
  myList.FindNext(2);
  myList.FindNext(1);
  cout << myList.Length() << '\n';
  myList.ReverseList();
  myList.PrintAt(4);
}
