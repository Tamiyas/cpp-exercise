#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>

class Dog {
  private:
    std::string name;
    int age;
  public:
    Dog() : name(""), age(0) { }
    explicit Dog(std::string name_, int age_)
      : name(name_), age(age_) { }
    void profile();
};

#endif
