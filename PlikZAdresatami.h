#ifndef PLIKZADRESATAMI_H_INCLUDED
#define PLIKZADRESATAMI_H_INCLUDED

#include <vector>
#include "Adresat.h"
#include "PlikTekstowy.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;
    const string NAZWA_TYMCZASOWEGO_PLIKU;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik();
    void zmienNazwePliku();
    void pobierzZPlikuIdOstatniegoAdresata();

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami);
    //settery
    void ustawIdOstatniegoAdresata(int noweId);
    //gettery
    int pobierzIdOstatniegoAdresata();

    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void edytujWybranegoAdresataWPliku(Adresat adresat);

};

#endif // PLIKZADRESATAMI_H_INCLUDED
