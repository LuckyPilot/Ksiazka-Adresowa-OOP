#ifndef PLIKZUZYTKOWNIKAMI_H_INCLUDED
#define PLIKZUZYTKOWNIKAMI_H_INCLUDED

#include <vector>
#include "Uzytkownik.h"
#include "PlikTekstowy.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami : public PlikTekstowy
{
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector<Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector<Uzytkownik>& uzytkownicy);
};

#endif // PLIKZUZYTKOWNIKAMI_H_INCLUDED
