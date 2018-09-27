#pragma once
#include <iostream>

template <typename T, int m, int n>
class Matrix{
public:
    //konstruktor - alokacja pamieci na tablice
    Matrix();

    //metoda reset ustawiajaca zadana wartosc wszystkich elementow tablicy
    void reset(T val);

    //metoda zwracajaca element tablicy o indeksie zadanym przez szablon
    template <int a, int b>
    T& at(void);

    //metoda dodajaca dwie tablice o tych samych wymiarach
    template <typename T1>
    void add(Matrix<T1,m,n>& other);

    //metoda zwracajaca wartosc elemntu o zadanych indeksach
    T getVal(int i, int j);

    //przeciazony operator <<
    friend std::ostream& operator<<(std::ostream& out, Matrix<T,m,n>& matrix){
        for (int i=0; i<n; ++i){
            for (int j=0; j<m; j++)
                out<<matrix.m_tab[i][j]<<" ";
            out<<std::endl;
        }
        return out;
    }

    //destruktor zwalniajacy zaalokowana pamiec
    ~Matrix();
private:
    T** m_tab;
};


/////////////////////////////////////
template <typename T, int m, int n>
Matrix<T,m,n>::Matrix(){
        m_tab = new T*[n];
        for (int i=0; i<n;i++){
            m_tab[i] = new T[m];
            for (int j=0; j<m; j++){
                m_tab[i][j] = T();
            }
        }
}

/////////////////////////////////////
template <typename T, int m, int n>
void Matrix<T,m,n>::reset(T val){
    for (int i=0; i<n;i++){
        for (int j=0; j<m ; j++){
            m_tab[i][j] = val;
        }
    }    
}

/////////////////////////////////////
template <typename T, int m, int n>
T Matrix<T,m,n>::getVal(int i, int j){
    return m_tab[i][j];
}

/////////////////////////////////////
template <typename T, int m, int n>
Matrix<T,m,n>::~Matrix(){
    for (int i=0;i<n;i++){
        delete[] m_tab[i];
    }
    delete[] m_tab;    
}

/////////////////////////////////////
template <typename T, int m, int n>
template <int a, int b>
T&  Matrix<T,m,n>::at(void){
        return m_tab[b][a];
}

/////////////////////////////////////
template <typename T, int m, int n>
template <typename T1>
void  Matrix<T,m,n>::add(Matrix<T1,m,n>& other){
        for (int i=0 ; i < n ; ++i){
            for (int j=0; j < n; ++j)
                m_tab[i][j]+=other.getVal(i,j);
        }
}