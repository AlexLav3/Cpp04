#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructed" << std::endl;
}

Brain::Brain(const Brain &copy){

}

Brain &Brain::operator=(const Brain &other){
	// if (this != &other)
	// 	ideas = other.ideas;
	return (*this);
}