#pragma once
#include "Typy.h"


//clasa reprezentujaca obiekt rzucajacy wyjatki
class ObiektMiotajacy{
public:
    //metoda rzucajaca wyjatek
    void Rzuc(void){
        typ2* wyjatek = new typ2(this);
        throw wyjatek;
    }

};
