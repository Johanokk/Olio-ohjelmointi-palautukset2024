#include "Animal.h"
#include "Dog.h"

int main() {
    Animal* animal = new Animal();
    Animal* dog = new Dog();

    animal->callOut(); // Tulostaa: Eläin ääntelee.
    dog->callOut();    // Tulostaa: Koira haukkuu!

    delete animal;
    delete dog;

    return 0;
}
