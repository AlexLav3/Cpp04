#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "Wron gAnimal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string WrongAnimal::getType() const{
    return std::string(this->type);
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong Animal sound" << std::endl;
}