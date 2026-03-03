#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound
    j->makeSound(); //dog sound
    meta->makeSound(); //unknown sound

    std::cout << std::endl << "wrong implementation: " << std::endl;
    const WrongAnimal* a = new WrongCat();
    a->makeSound(); //outputs "Wrong Animal" sound instead of "Wrong Cat sound"
    delete a;
    std::cout << std::endl;

    delete j;
    delete i;
    delete meta;
    return 0;
}