#pragma once
#include <iostream>

class Pomieszczenie{
public:
    /////////////////////////////////////
    Pomieszczenie(std::string name) : m_name(name) {
        std::cout<<"Tworze pomieszcznie: "<<m_name<<std::endl;
    }

    /////////////////////////////////////
    void zetrzyj_kurze(void) {
        std::cout<<"Scieram kurze w pomieszczeniu: "<<m_name<<std::endl;
    }

    /////////////////////////////////////
    void umyj_podloge(void) {
        std::cout<<"Myje podloge w pomieszczeniu: "<<m_name<<std::endl;
    }
    
    /////////////////////////////////////
    void odkurz(void) {
        std::cout<<"Odkurzam pomieszczenie: "<<m_name<<std::endl;
    }
    
    /////////////////////////////////////
    void wstaw(char val){
        std::cout<<"Wstawiam "<<val<<" do pomieszczenia: "<<m_name<<std::endl;
    }

    void wstaw(int val){
        std::cout<<"Wstawiam "<<val<<" do pomieszczenia: "<<m_name<<std::endl;
    }

    void wstaw(double val){
        std::cout<<"Wstawiam "<<val<<" do pomieszczenia: "<<m_name<<std::endl;
    }

    void wstaw(unsigned int val){
        std::cout<<"Wstawiam "<<val<<" do pomieszczenia: "<<m_name<<std::endl;
    }
private:
    std::string m_name;
};

template <void (Pomieszczenie::*T)(void)>
void Lokaj(Pomieszczenie& room){
    (room.*T)();
}

/*template <void (Pomieszczenie::*T)(void)>
void Lokaj(const Pomieszczenie& room){
    (room.*T)();
}

template <int>
void Lokaj(const Pomieszczenie& room){
    std::cout<<"Nic nie robie."<<std::endl;
}*/