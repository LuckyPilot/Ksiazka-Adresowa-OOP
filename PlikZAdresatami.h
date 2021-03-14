#ifndef PLIKZADRESATAMI_H_INCLUDED
#define PLIKZADRESATAMI_H_INCLUDED

#include <fstream>
#include <vector>
#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami
{
    int idOstatniegoAdresata;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty();

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami);
    //settery
    void ustawIdOstatniegoAdresata(int noweId);
    //gettery
    int pobierzIdOstatniegoAdresata();

    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);

};

#endif // PLIKZADRESATAMI_H_INCLUDED
