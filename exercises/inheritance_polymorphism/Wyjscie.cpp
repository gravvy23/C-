#include "Wyjscie.h"
#include <iostream>

/////////////////////////////////////////////////////////////////////////////////
void Wyjscie::Wyswietl(const Wejscie& wejscie) const{
    std::string frame;
    for (int i=0;i<m_frame_length*m_width;i++){
        frame+=m_frame;
        if((i+1)%m_width == 0) frame+='\n';
    }
    std::string inside;
    for (int i=0;i<m_width*m_length;i++){
        inside+=wejscie.ShowChar();
        if((i+1)%m_width == 0) inside+='\n';
    }
    std::cout<<"Polaczono "<<m_name<<" i "<<wejscie.ShowName()<<std::endl
             <<frame<<inside<<frame<<std::endl;

}
