#include <iostream>
int main(){
std::string username; // Переменная для имени пользователя
std::cout << "Введите имя: "; std::cin >> username; // Ввод имени пользователя
std::cout << "Hello world from " << username << "!" << std::endl;
return 0;
}
