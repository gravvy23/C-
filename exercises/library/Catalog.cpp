#include "Catalog.h"
#include <iostream>

//////////////////////////////////////////
void Catalog::AddBook(Book* book){
    Book** tmp;
    if (m_size == 0) tmp = new Book*;
    else tmp = new Book*[m_size+1];
    for (int i=0;i<m_size;i++) tmp[i] = m_books[i];
    tmp[m_size] = book;
    if (m_size == 1) delete m_books;
    else if (m_size > 1) delete[] m_books;
    m_books = tmp;
    m_size++;
}  

//////////////////////////////////////////
void Catalog::Print(void) const{
    std::cout<<"Catalog::name "<<m_title<<std::endl;
    for (int i=0;i<m_size;i++){
        std::cout<<"Catalog::book("<<i<<") "
                 <<m_books[i]->GetTitle()<<std::endl;
    }
}  


//////////////////////////////////////////
Catalog::~Catalog(){
    for (int i=0;i<m_size;i++){
        delete m_books[i];
    }
    if (m_size == 1) delete m_books;
    else if (m_size>1) delete[] m_books;
}
