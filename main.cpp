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
  if(argc < 2)
  {
    cout << "Wrong number of parameters\n";
  }
  else
  {
    executive exec(argv[1]);
    exec.run();
  }
  return 0;
}
