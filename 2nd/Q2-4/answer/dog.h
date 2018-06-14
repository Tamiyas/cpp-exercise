#ifndef DOG_H
#define DOG_H
#include "animal.h"
#include <string>
#include <iostream>

class Dog : public Animal {
  public:
    Dog() : Animal() { }
    explicit Dog(const std::string& name) : Animal(name) { }
    void cry();
};

#endif
