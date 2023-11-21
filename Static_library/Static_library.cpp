#include <iostream>
#include <string>
#include<Windows.h>
#include "Greeter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name;
    std::cout << "Введите своё имя: ";
    std::cin >> name;
    Greeter greetings(name);
    greetings.greet();
    return 0;
}
