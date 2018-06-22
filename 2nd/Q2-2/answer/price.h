#ifndef PRICE_H
#define PRICE_H

class Price {
  private:
    int price;
  public:
    Price() : price(0) { }
    explicit Price(int price_) : price(price_) { }
    int get();
};



#endif
