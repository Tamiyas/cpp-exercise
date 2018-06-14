#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
  private:
    std::string title;
    int price;
  public:
    Book() { }
    explicit Book(std::string title_, int price_)
      : title(title_), price(price_) { }
    std::string getTitle();
    int calculateNumber(int total);
};


#endif
