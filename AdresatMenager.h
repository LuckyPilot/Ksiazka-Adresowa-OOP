#ifndef ADRESATMENAGER_H_INCLUDED
#define ADRESATMENAGER_H_INCLUDED

#include <vector>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

class AdresatMenager
{
    //public:  //DO USUNIECIA TYLKO DO TESTOW
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

public:
    AdresatMenager(string nazwaPlikuZAdresatami);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyczyscWektorAdresatow();
    void dodajAdresata(int idZalogowanegoUzytkownika);
};

#endif // ADRESATMENAGER_H_INCLUDED
