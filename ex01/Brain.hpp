#pragma once
#include "Animal.hpp"

class Brain
{
    private:
    
    public:
    std::string ideas[100];
    Brain();
    ~Brain();
    Brain(const Brain &copy);
    Brain& operator= (const Brain& other);
};