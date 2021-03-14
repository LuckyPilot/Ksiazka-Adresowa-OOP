#ifndef ADRESATMENAGER_H_INCLUDED
#define ADRESATMENAGER_H_INCLUDED

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

class AdresatMenager
{
    //public:  //DO USUNIECIA TYLKO DO TESTOW
    const int ID_ZALOGOWWANEGO_UZYTKOWNIKA;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();

public:
    AdresatMenager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
};

#endif // ADRESATMENAGER_H_INCLUDED
