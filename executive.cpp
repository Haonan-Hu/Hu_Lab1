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
  int choice;
  do
  {
    cout << "make a selection: \n";
    cout << "1) Insert value at position\n";
    cout << "2) Remove at position\n";
    cout << "3) Replace value at position\n";
    cout << "4) Print length\n";
    cout << "5) Print list\n";
    cout << "6) Exit\n";
    cout << "Choice: ";
    cin >> choice;

    if(choice == 1)
    {
      int position;
      int entry;
      cout << "What position you want to insert?: \n";
      try
      {
        cin >> position;
      }
      catch(runtime_error& rte)
      {
        cout << rte.what() << '\n';
      }
      cout << "What is your entry value?: \n";
      cin >> entry;
      myList.insert(position, entry);
    }

    if(choice == 2)
    {
      int position;
      cout << "What position you want to remove?: \n";
      try
      {
        cin >> position;
      }
      catch(runtime_error& rte)
      {
        cout << rte.what() << '\n';
      }
      myList.remove(position);
    }

    if(choice == 3)
    {
      int position;
      int entry;
      try
      {
        cin >> position;
      }
      catch(runtime_error& rte)
      {
        cout << rte.what() << '\n';
      }
      cout << "What is your entry value?: \n";
      cin >> entry;
      myList.replace(position, entry);
    }

    if(choice == 4)
    {
      cout << "The length is " << myList.getLength() << '\n';
    }

    if(choice == 5)
    {
      for(int i = 0;i < myList.getLength();i++)
      {
        cout << myList.getFront().getEntry() << ' ';
        myList.getFront().getNext();
      }
    }
  }while(choice != 6);
}
