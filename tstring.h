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

    ~TString();
    private:
    char* ptr = nullptr;
    std::size_t len=0;

    protected:
};

#endif
// g++ -std=c++14 pliki do kompilacji.cpp /*cppp -o nazwa_pliku_wyj -DDEBUG