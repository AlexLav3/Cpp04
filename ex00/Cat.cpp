#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &copy){
    type = copy.type;
}

Cat &Cat::operator=(const Cat &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

void Cat::makeSound()const{
    std::cout << "Meow" << std::endl;
}