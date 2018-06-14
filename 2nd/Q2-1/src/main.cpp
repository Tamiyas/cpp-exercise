#include "book.h"
#include <iostream>

int main()
{
  Book book("吾輩は猫である", 680);
  std::cout << book.getTitle 
            << ": " << 680 * 3 << "円の個数は"
            << book.getNumber()
            << "です。" << std::endl;
}
