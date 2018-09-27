#include "Typy.h"
#include <iostream>

void Przetworz(typ* wyjatek){
    std::cout<<"Przetworz - wyjatek typu "
             <<wyjatek->GetType()<<" o adresie: "<<wyjatek<<std::endl;
    throw;
}
