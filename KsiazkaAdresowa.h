#ifndef KSIAZKAADRESOWA_H_INCLUDED
#define KSIAZKAADRESOWA_H_INCLUDED

#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    //public:  //DO USUNIECIA TYLKO DO TESTOW
    UzytkownikMenager uzytkownikMenager;
    AdresatMenager adresatMenager;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
};

#endif // KSIAZKAADRESOWA_H_INCLUDED
