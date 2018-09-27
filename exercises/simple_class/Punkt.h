#pragma once

class Punkt{
public:
    //////////////////////////////////////////////////////////
    Punkt(int x, int y) : m_x(x), m_y(y) {}

    //////////////////////////////////////////////////////////
    template <bool T>
    int wsp(void) const{
        if (T == 0) return m_x;
        else if (T == 1) return  m_y;
    }


    //////////////////////////////////////////////////////////
    static int min(int val1, int val2){
        return val1<val2 ? val1 : val2;
    }

    //////////////////////////////////////////////////////////
    static Punkt min(const Punkt p1, const Punkt p2){
        if (p1.m_x == p2.m_x) return p1.m_y < p2.m_y ? p1 : p2;
        return p1.m_x < p2.m_x ? p1 : p2;
    }

    //////////////////////////////////////////////////////////
    static int max(int val1, int val2){
        return val1>val2 ? val1 : val2;
    }

    //////////////////////////////////////////////////////////
    static Punkt max(const Punkt p1, const Punkt p2){
        if (p1.m_x == p2.m_x) return p1.m_y > p2.m_y ? p1 : p2;
        return p1.m_x > p2.m_x ? p1 : p2;
    }

    //////////////////////////////////////////////////////////
    friend bool operator<(const Punkt p1, const Punkt p2){
        if (p1.m_x == p2.m_x) return p1.m_y < p2.m_y ? true : false;
        return p1.m_x < p2.m_x ? true : false;
    }
private:
    int m_x;
    int m_y;
};
