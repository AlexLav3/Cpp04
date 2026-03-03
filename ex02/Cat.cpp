#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::~Cat(){
    std::cout << "Cat destructor" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &copy){
    std::cout << "Cat copy constructor called" << std::endl;
    type = copy.type;
    brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment called" << std::endl;
    if (this != &other)
    {
        type = other.type;
		if(this->brain != NULL)
        	delete brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound()const{
    std::cout << "Meow" << std::endl;
}