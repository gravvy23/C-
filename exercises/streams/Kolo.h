#pragma once

class Kolo: public Ksztalt{
public:
    Kolo(int radius) : Ksztalt(), m_radius(radius) {}

    double polePow() const{
        return 3.1415 * m_radius * m_radius;
    }

    std::ostream& Wyswietl(std::ostream& strumien) const{
        strumien<<"Kolo o promieniu: "<<m_radius<<std::endl;
        return strumien;
    }
private:
    int m_radius;
};
