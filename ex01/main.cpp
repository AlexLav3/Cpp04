#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    delete d;//should not create a leak
    delete c;
    const Animal* anims[4];
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