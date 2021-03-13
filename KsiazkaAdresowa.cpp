#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
: uzytkownikMenager(nazwaPlikuZUzytkownikami), adresatMenager(nazwaPlikuZAdresatami)
{
    uzytkownikMenager.wczytajUzytkownikowZPliku();
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
    if (uzytkownikMenager.pobierzIdZalogowanegoUzytkownika() != 0)
        adresatMenager.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenager.wylogowanieUzytkownika();
    adresatMenager.wyczyscWektorAdresatow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenager.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenager.dodajAdresata(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}
