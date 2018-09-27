#pragma once
#include "Papierozerne.h"

class Ksero: virtual public Papierozerne{
public:
    //////////////////////////////////////////////////
    Ksero(Rozdzielczosc rozdz) : Papierozerne(rozdz) {}

    //////////////////////////////////////////////////
    virtual std::string rodzaj(void) const{
        return std::string("Ksero");
    }
};
