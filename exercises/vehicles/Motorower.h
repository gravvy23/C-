#pragma once
#include "Pojazd.h"

class Motorower : public Pojazd {
public:

    //konstruktor domyslny
    Motorower() : Pojazd() {}

    //konstruktor
    Motorower(Silnik silnik, std::string kolor, int stan_licznika): Pojazd(silnik, kolor, stan_licznika, 2) {}

    //przeciazony operator =
    Motorower& operator=(const Motorower& motorower){
        Pojazd& pojazd = *this;
        pojazd = motorower;
        return *this;
    }
};
