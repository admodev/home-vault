#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>

/*
 * Creates a directory.
*/
void create_directories(char* directory_name)
{
  try
  {
    if (mkdir(directory_name, 0777) == -1) {
      std::cout << "Error: " << strerror(errno) << std::endl;
    } else {
      std::cout << "Directory created!";
    }
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
}