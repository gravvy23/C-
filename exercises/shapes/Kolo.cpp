#include "Kolo.h"
#include <iostream>

//////////////////////////////////////////////////////
void Kolo::wypisz(std::ostream& ekran) const{
    ekran<<"Kolo o promieniu:"<<m_r<<std::endl;
}

//////////////////////////////////////////////////////
double Kolo::polePow(void) const{
    return 3.1415*m_r*m_r;
}