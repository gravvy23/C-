#pragma once

class Kwadrat : public Ksztalt{
public:
    Kwadrat(int a): Ksztalt(), m_a(a) {}

    double polePow(void) const{
        return static_cast<double>(m_a*m_a);
    }

    std::ostream& Wyswietl(std::ostream& strumien) const{
        strumien<<"Kwadrat o boku: "<<m_a<<std::endl;
        return strumien;
    }
private:
    int m_a;
};
