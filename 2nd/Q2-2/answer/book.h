#ifndef BOOK_H
#define BOOK_H
#include "price.h"
#include <string>

class Book {
  private:
    std::string title;
    Price price;
  public:
    Book() : title(""), price(0) { }
    explicit Book(std::string title_, Price& price_)
      : title(title_), price(price_) { }
    std::string getTitle();
    int calculateNumber(int total);
};


#endif
