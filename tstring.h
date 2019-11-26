#ifndef TSTRING_H
#define TSTRING_H

#include <cstring>


class TString {


    public:
    TString (const char* s=nullptr);
    TString (const TString& s);
    TString& operator=(const TString& s);
    TString( TString&& s);
    TString& operator= (TString&& s);

    //Operatory na rzecz typu String
    char& operator[](size_t n);
    const char& operator[](size_t n) const;
    //Destuktor
    ~TString();
    private:
    char* ptr = nullptr;
    std::size_t len=0;

    protected:
};

#endif
// g++ -std=c++14 pliki do kompilacji.cpp /*.cpp -o output_file -DDEBUG