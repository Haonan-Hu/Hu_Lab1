/*
Author: Haonan Hu
File: main.cpp
Date:1/30/2020
Brief:File is main file
*/
#include "executive.h"
#include "Linked_list.h"
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char*argv[ ])
{
  string command;
  command = argv[1];
  if(command == "-i")
  {
    executive exec;
    exec.run();
  }
  if(command == "-t")
  {
    LinkedListTester test;
    test.runTests();
  }
  else
  {
    cout << "Wrong command\n";
  }
  return 0;
}
