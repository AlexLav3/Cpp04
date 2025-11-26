#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::~Dog(){
    std::cout << "Dog destructor" << std::endl;
	delete brain;
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
