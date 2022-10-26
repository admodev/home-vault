#include <stdio.h>
#include <string>
#include <iostream>

// Local library includes
#include "lib/console_functions.h"
#include "lib/system_functions.h"

void call_create_folder()
{
  std::string folder_name;

  std::cout << "Please, enter folder name:\n"
            << std::endl;

  std::cin >> folder_name;

  create_directories(folder_name);
}

int main()
{
  char decision;

  while (decision != 'q' || decision != 'Q')
  {
    print_initial_options();

    std::cin >> decision;

    switch (decision)
    {
    case 'f':
      call_create_folder();
      break;
    case 'q':
      std::cout << "Exiting..." << std::endl;
      return 0;
    default:
      std::cout << "Please, choose a function to continue!" << std::endl;
      break;
    }
  }

  return 0;
}
