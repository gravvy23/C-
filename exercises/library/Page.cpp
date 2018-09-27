#include "Page.h"
#include <iostream>

//////////////////////////////////////////
Page* Page::Copy(void) const{
    Page* tmp = new Page();
    tmp->AddHeader(m_header);
    tmp->AddText(m_text);
    return tmp;
}

//////////////////////////////////////////
void Page::Print(void) const{
    std::cout<<"Page::header "<<m_header<<std::endl
             <<"Page::text "<<m_text<<std::endl<<std::endl;
}
