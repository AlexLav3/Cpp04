#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructed" << std::endl;
}

Brain::Brain(const Brain &copy){
 	std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &other){
 	std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}