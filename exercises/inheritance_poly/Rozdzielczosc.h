#pragma once

//klasa reprezentujaca rozdzielczosc
class Rozdzielczosc{
public:
    //konsturktor 
    Rozdzielczosc(int x, int y): m_x(x), m_y(y) {}

    // getter x
    int get_x(void) const {return m_x;}

    //getter y
    int get_y(void) const {return m_y;}
private:   
    int m_x, m_y; //skladniki klasy
};
