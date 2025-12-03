#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*
In your main function, create and fill an array of Animal objects. Half of it will
be Dog objects and the other half will be Cat objects. At the end of your program
execution, loop over this array and delete every Animal. You must delete directly dogs
and cats as Animals.
*/
int main()
{
    //given part
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
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