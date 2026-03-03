#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
    type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

void WrongCat::makeSound()const{
    std::cout << "Wrong Cat sound" << std::endl;
}