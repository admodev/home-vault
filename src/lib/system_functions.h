#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/*
 * Creates a directory.
*/
void create_directories(std::string directory_name)
{
  try
  {
    if (mkdir(directory_name.c_str(), 0777) == -1) {
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