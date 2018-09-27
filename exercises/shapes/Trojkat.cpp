#include "Trojkat.h"
#include <iostream>
#include <cmath>

//////////////////////////////////////////////////
void Trojkat::wypisz(std::ostream& ekran) const{
    ekran<<"Trojkat o bokach:"<<m_a<<" "<<m_b<<" "<<m_c<<std::endl;
}

//////////////////////////////////////////////////
double Trojkat::polePow(void) const{
    return sqrt(m_x*(m_x-m_a)*(m_x-m_b)*(m_x-m_c));
}