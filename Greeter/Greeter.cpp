#include <iostream>
#include "Greeter.h"

Greeter::Greeter(std::string name) {
	this->name = name;
}
void Greeter::greet() {
	
	std::cout << "�����������, " << name << '!' << std::endl;
}
