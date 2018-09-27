#pragma once
#include <iostream>
#include "Motorower.h"

class Romet : public Motorower{
public:

    //konsturktor domyslny
    Romet() : Motorower() {}

    //konstruktor
    Romet(Silnik silnik, int stan_licznika, std::string kolor = "czerwony metalic") : Motorower(silnik, kolor, stan_licznika) {}

    //operator =
    Romet& operator=(const Romet& romet){
        Motorower& motorower = *this;
        motorower = romet;
        return *this;
    }
};
