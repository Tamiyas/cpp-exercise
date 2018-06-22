#include "animal.h"
#include "dog.h"
#include "cat.h"

int main()
{
  bool like_dog = true;
  Animal* animal;
  
  if(like_dog)  animal = new Dog("りゅういち");
  else          animal = new Cat("モモ");
  
  animal->cry();
  delete animal;
}