#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &copy){
    type = copy.type;
}

Dog &Dog::operator=(const Dog &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

void Dog::makeSound()const {
    std::cout << "Wof Wof" << std::endl;
}
