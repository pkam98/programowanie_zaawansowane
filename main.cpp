#include "tstring.h"
#include <iostream>
using namespace std;

int main() {
    TString s1;
    TString s2 ("inicjalizacja słowem");
    TString s3 (s2);
    s3=s2;
}

