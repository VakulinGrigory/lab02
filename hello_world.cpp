#include <iostream>
int
main()
{
  std::string username; // Variable for user's name
  std::cout << "Введите имя: ";
  std::cin >> username; // Entering user's name
  std::cout << "Hello world from " << username << "!" << std::endl;
  return 0;
}
