#pragma once

#include <iostream>
#include "Pojazd.h"

class Samochod : public virtual Pojazd{
public:

    //konstruktor domyslny
    Samochod() : Pojazd() {}

    //konstruktor
    Samochod(Silnik silnik, std::string kolor, int stan_licznika): Pojazd(silnik, kolor, stan_licznika, 4) {}

    //przeciazony operator = 
    Samochod& operator=(const Samochod& samochod){
        Pojazd& pojazd = *this;
        pojazd = samochod;
        return *this;
    }

    virtual Pojazd* Clone() {
        return new Samochod(m_silnik,m_kolor,m_stan_licznika);

    }
};
