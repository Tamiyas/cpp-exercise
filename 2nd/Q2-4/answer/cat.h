#ifndef CAT_H
#define CAT_H
#include "animal.h"
#include <string>
#include <iostream>

class Cat : public Animal {
  public:
    Cat() : Animal() { }
    explicit Cat(const std::string& name) : Animal(name) { }
    void cry();
};

#endif
