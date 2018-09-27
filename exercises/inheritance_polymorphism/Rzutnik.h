#pragma once
#include "Wyjscie.h"

//klasa reprezentujaca Rzutnik
class Rzutnik : public Wyjscie{
public:

    //konstruktor
    Rzutnik(int width, int length) : Wyjscie(width,length,1,'-',"rzutnik") {}

    //destruktor
    ~Rzutnik(){}
};
