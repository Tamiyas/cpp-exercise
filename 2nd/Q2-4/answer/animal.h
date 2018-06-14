#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal {
  protected:
    std::string name;
  public:
    Animal() { }
    explicit Animal(const std::string& name_) : name(name_) { }
    void cry();
};


#endif
