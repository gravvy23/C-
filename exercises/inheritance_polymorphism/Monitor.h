#pragma once
#include "Wyjscie.h"

//klasa reprezentujaca monitor
class Monitor : public Wyjscie{
public:

    //konstruktor
    Monitor(int width, int length) : Wyjscie(width,length,2,'+',"monitor") {}

    //destruktor
    ~Monitor(){}
};
