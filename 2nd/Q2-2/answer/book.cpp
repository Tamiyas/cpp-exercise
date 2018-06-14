#include "book.h"

std::string Book::getTitle()
{
  return title;
}

int Book::calculateNumber(int total)
{
  return total / price.get();
}
