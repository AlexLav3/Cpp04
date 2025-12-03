#include "Animal.hpp"

AAnimal::AAnimal(){
	this->type = "random animal";
}

AAnimal::~AAnimal(){
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy){
    type = copy.type;
}

AAnimal &AAnimal::operator=(const AAnimal &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string AAnimal::getType() const{
    return std::string(this->type);
}

void AAnimal::makeSound() const {
    std::cout << "Not known animal sound" << std::endl;
}