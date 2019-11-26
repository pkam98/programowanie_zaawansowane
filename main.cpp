#include "tstring.h"
#include <iostream>
using namespace std;

TString fun(const char* c){
    return TString(c);
}

int main() {
    TString s1=("trololo");
    cout<<s1[3]<<endl;
    //TString s2 ("inicjalizacja słowem");
   //TString s3 (s2);
    //s3=s2;
    //s3 = std::move(s1);
    TString s4=("test");
    TString s5 = fun("konstruktor przenoszący");
    TString s6 = s4;
}

