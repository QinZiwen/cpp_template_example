#include "beverage.h"

void beverageTest() {
    using namespace beg_v1;
    Beverage* b = new FruitBeverage();
    std::cout << b->getPrice() << std::endl;

    Beverage* b1 = new SugarDec(b);
    std::cout << b1->getPrice() << std::endl;

    Beverage* b2 = new MilkDec(b1);
    std::cout << b2->getPrice() << std::endl;

    Beverage* b3 = new BubbleDec(b2);

    delete b;
    delete b1;
    delete b2;
    delete b3;
}

int main() {
    
    return 0;
}