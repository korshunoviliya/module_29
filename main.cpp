#include <iostream>

class Cat;

class Animal
{
public:
    virtual void say(Animal* a, Animal* b) = 0;
};

class Dog : public Animal
{
public:
    virtual void say(Animal* a, Animal* b) override {
        if(dynamic_cast<Dog*>(b)) {
            std::cout << " Woof ";
        }
        else std::cout << " Bark ";
    }
};

class Cat : public Animal
{
public:
    virtual void say(Animal* a, Animal* b) override {
        if(dynamic_cast<Cat*>(b)) {
            std::cout << " Purr ";
        }
        else std::cout << " Meow ";
    }
};

void meeting(Animal* a, Animal* b){
    a->say(a, b);
    b->say(b, a);
}
int main() {

    //Animal* a = new Dog();
    //Animal* b = new Dog();

    //Animal* a = new Dog();
    //Animal* b = new Cat();

    //Animal* a = new Cat();
    //Animal* b = new Dog();

    Animal* a = new Cat();
    Animal* b = new Cat();
    meeting(a, b);

    return 0;
}
