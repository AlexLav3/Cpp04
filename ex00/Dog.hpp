#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    private: 
    
    public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog& operator= (const Dog& other);
    virtual void makeSound() const override;
};