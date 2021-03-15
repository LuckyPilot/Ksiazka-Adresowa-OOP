#ifndef ADRESATMENAGER_H_INCLUDED
#define ADRESATMENAGER_H_INCLUDED

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

class AdresatMenager
{
    //public:  //DO USUNIECIA TYLKO DO TESTOW
    const int ID_ZALOGOWWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresataWPliku(Adresat adresat);

public:
    AdresatMenager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunWybranegoAdresata();
    void edytujWybranegoAdresata();
};

#endif // ADRESATMENAGER_H_INCLUDED
