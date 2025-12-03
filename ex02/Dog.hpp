#pragma once
#include "Animal.hpp"

class Dog : public AAnimal
{
    private: 
    Brain* brain;
    
    public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog& operator= (const Dog& other);
    virtual void makeSound() const override;
};