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
    std::cout << "Dog copy constructor called" << std::endl;
    type = copy.type;
    brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog copy assignment called" << std::endl;
    if (this != &other)
    {
        type = other.type;
		if(this->brain != NULL)
        	delete brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}
void Dog::makeSound()const {
    std::cout << "Wof Wof" << std::endl;
}
