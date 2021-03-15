#ifndef PLIKTEKSTOWY_H_INCLUDED
#define PLIKTEKSTOWY_H_INCLUDED

#include <fstream>

using namespace std;

class PlikTekstowy
{
protected:
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPliku);
    bool czyPlikJestPusty(fstream& plikTekstowy);
};

#endif // PLIKTEKSTOWY_H_INCLUDED
