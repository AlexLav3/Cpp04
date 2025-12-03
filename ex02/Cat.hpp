#pragma once
#include "Animal.hpp"

class Cat : public AAnimal
{
    private: 
    Brain* brain;
    
    public: 
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat& operator= (const Cat& other);
    virtual void makeSound() const override;
};