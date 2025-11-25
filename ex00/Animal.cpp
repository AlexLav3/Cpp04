#include "Animal.hpp"

Animal::Animal(){
	this->type = "random animal";
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy){
    type = copy.type;
}

Animal &Animal::operator=(const Animal &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string Animal::getType() const{
    return std::string(this->type);
}

void Animal::makeSound() const {
    std::cout << "Not known animal sound" << std::endl;
}