#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    //const Animal* j = new Animal(); //this does not compile - Animal is an abstract class 
    
    ///everything else should work as before:
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    const AAnimal* anims[4];
    for(int i = 0; i < 4; ++i){
        if(i % 2 == 0)
            anims[i] = new Dog();
        else 
            anims[i] = new Cat();
    }
    // for(int i = 0; i < 4; ++i) //just for test 
    //     anims[i]->makeSound();
    for(int i = 0; i < 4; ++i)
        delete anims[i];
    return 0;
}