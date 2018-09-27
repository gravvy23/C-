#pragma once
#include <istream>
#include "Samochod.h"

class Mercedes : public Samochod {
public:

    //konstruktor domyslny
    Mercedes() : Samochod() {}

    //konstruktor
    Mercedes(Silnik silnik, int stan_licznika, std::string kolor = "czarny metalic") : Samochod(silnik, kolor, stan_licznika) {}

    //przeciazony operator =
    Mercedes& operator=(const Mercedes& mercedes){
        Samochod& samochod = *this;
        samochod = mercedes;
        return *this;
    }
};