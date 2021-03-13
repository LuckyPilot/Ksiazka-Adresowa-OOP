#ifndef PLIKZADRESATAMI_H_INCLUDED
#define PLIKZADRESATAMI_H_INCLUDED

#include <fstream>
#include <vector>
#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    const string nazwaTymczasowegoPlikuZAdresatami;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty();

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector<Adresat>& adresaci, int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);

};

#endif // PLIKZADRESATAMI_H_INCLUDED
