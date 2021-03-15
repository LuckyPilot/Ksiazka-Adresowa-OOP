#ifndef KSIAZKAADRESOWA_H_INCLUDED
#define KSIAZKAADRESOWA_H_INCLUDED

#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    //public:  //DO USUNIECIA TYLKO DO TESTOW
    UzytkownikMenager uzytkownikMenager;
    AdresatMenager* adresatMenager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    char wybor;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami = "Uzytkownicy.txt", string nazwaPlikuZAdresatami = "Adresaci.txt");
    ~KsiazkaAdresowa();

    //gettery
    char pobierzWybor();

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();  // do usuniecia
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    bool czyUzytkownikJestZalogowany();
    void wybierzOpcjeZMenuGlownego();
    void wybierzOpcjeZMenuUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunWybranegoAdresata();
    void edytujWybranegoAdresata();
};

#endif // KSIAZKAADRESOWA_H_INCLUDED
