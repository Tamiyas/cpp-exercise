#include "book.h"
#include "price.h"
#include <iostream>

int main()
{
  Price price(680);
  Book book("吾輩は猫である", price);
  std::cout << book.getTitle()
            << ": " << 680 * 3 << "円の個数は"
            << book.calculateNumber(680 * 3)
            << "冊です。" << std::endl;
}
