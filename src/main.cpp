#include <stdio.h>
#include <string.h>
#include <iostream>

// Local library includes
#include "lib/system_functions.h"

int main()
{
  char* folder_name;

  std::cout << "Please, enter folder name:\n" << std::endl; 

  std::cin >> folder_name;

  create_directories(folder_name);

  return 0;
}
