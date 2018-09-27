#pragma once
#include <cmath>

class Trojkat: public Ksztalt{
public:
    Trojkat(int a, int b, int c) : Ksztalt(), m_a(a), m_b(b), m_c(c) {}

    double polePow(void) const{
        double x = (m_a+m_b+m_c)/2.0;
        return sqrt(x*(x-m_a)*(x-m_b)*(x-m_c));
    }

    std::ostream& Wyswietl(std::ostream& strumien) const {
        strumien<<"Trojkat o bokach: "<<m_a<<" "<<m_b<<" "<<m_c<<std::endl;
        return strumien;
    }
private:
    int m_a , m_b, m_c;
};
