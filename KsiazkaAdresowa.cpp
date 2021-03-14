#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
: uzytkownikMenager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
{
    adresatMenager = NULL;
}

KsiazkaAdresowa::~KsiazkaAdresowa()
{
    delete adresatMenager;
    adresatMenager = NULL;
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenager.logowanieUzytkownika();
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
        adresatMenager = new AdresatMenager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenager.wylogowanieUzytkownika();
    delete adresatMenager;
    adresatMenager = NULL;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
        adresatMenager->wyswietlWszystkichAdresatow();
    else
        cout << "Aby wyswietlic wszystkich adresatow nalezy najpierw sie zalogowac" << endl;
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
        adresatMenager->dodajAdresata();
    else
        cout << "Aby dodac adresata nalezy najpierw sie zalogowac" << endl;
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
        return true;
    else
        return false;
}
