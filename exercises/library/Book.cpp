#include "Book.h"
#include <iostream>

//////////////////////////////////////////
Book::Book(std::string title){
    Page* tmp_page = new Page();
    tmp_page->AddText("Title page");
    m_autor = "anonym";
    m_title = title;
    m_pages = new Page*;
    m_pages[0] = tmp_page;
    m_size = 1;
}

//////////////////////////////////////////
void Book::AddPage(const Page* page){
    Page* tmp_page = page->Copy();
    Page** tmp = new Page*[m_size+1];
    for (int i=0;i<m_size;i++)
        tmp[i]=m_pages[i];
    tmp[m_size]=tmp_page;
    if (m_size == 1) delete m_pages;
    else delete[] m_pages;
    m_pages=tmp;
    m_size++;
}

//////////////////////////////////////////
void Book::Copy(const Book* book){
    m_autor = "(copy) "+book->m_autor;
    m_title = book->m_title;
    m_size = book->m_size;
    delete m_pages[0]; //zwalnia pamiec zaalokowana przez konstruktor
    delete m_pages;
    m_pages = new Page*[m_size];
    for (int i=0;i<m_size;i++){
        m_pages[i]=book->m_pages[i]->Copy();
    }
}

//////////////////////////////////////////
void Book::AddHeader(std::string header){
    for (int i=1;i<m_size;i++){
        m_pages[i]->AddHeader(header);
    }
}

//////////////////////////////////////////
void Book::AddText(std::string text){
    static int counter = 1;
    if (counter < m_size){
        m_pages[counter]->AddText(text);
    }
    else std::cout<<"[ERROR]:: No enough pages in the book!"<<std::endl<<std::endl;
    counter++;
}


//////////////////////////////////////////
void Book::Print(void) const{
    std::cout<<"Book::autor "<<m_autor<<std::endl;
    for (int i=0;i<m_size;i++){
        std::cout<<"Page("<<i<<")::text "
                 <<m_pages[i]->GetText()
                 <<"(header: "<<m_pages[i]->GetHeader()<<")"<<std::endl;
    }
    std::cout<<std::endl;
}

//////////////////////////////////////////
Book::~Book(){
    for (int i=0;i<m_size;i++){
        delete m_pages[i];
    }
    if (m_size == 1) delete m_pages;
    else delete[] m_pages;
}
