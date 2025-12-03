#pragma once 
#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
    std::string type;

    public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal& operator= (const AAnimal& other);
    virtual void makeSound() const = 0;
    std::string getType() const;
};