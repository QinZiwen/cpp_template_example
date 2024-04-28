#pragma once

#include <iostream>

namespace beg_v1 {

class Beverage {
public:
    virtual ~Beverage() {}
    virtual int getPrice() = 0;
};

class FruitBeverage : public Beverage {
public:
    virtual int getPrice() {
        return 10;
    }
};

class Decorator : public Beverage {
public:
    Decorator(Beverage* beverage) : m_beverage(beverage) {}
    virtual ~Decorator() {}

    virtual int getPrice() override {
        return m_beverage->getPrice();
    }
protected:
    Beverage* m_beverage;
};

class SugarDec : public Decorator {
public:
    SugarDec(Beverage* beverage) : Decorator(beverage) {}
    virtual int getPrice() override {
        return Decorator::getPrice() + 1;
    }
};

class MilkDec : public Decorator {
public:
    MilkDec(Beverage* beverage) : Decorator(beverage) {}
    virtual int getPrice() override {
        return Decorator::getPrice() + 2;
    }
};

class BubbleDec : public Decorator {
public:
    BubbleDec(Beverage* beverage) : Decorator(beverage) {}
    virtual int getPrice() override {
        return Decorator::getPrice() + 3;
    }
};

}  // namespace beg_v1

