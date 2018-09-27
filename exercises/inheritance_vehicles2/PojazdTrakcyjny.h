#pragma once
#include "Pojazd.h"

class PojazdTrakcyjny : public virtual Pojazd{
public:

    PojazdTrakcyjny(Silnik silnik, int stan_licznika, std::string kolor = "czarny") : Pojazd(silnik, kolor, stan_licznika) {}

    virtual Pojazd* Clone() {
        return new PojazdTrakcyjny(m_silnik, m_stan_licznika,m_kolor);
    }

private:

};
