#ifndef ADRESAT_H_INCLUDED
#define ADRESAT_H_INCLUDED

#include <iostream>

using namespace std;

class Adresat
{
    //public:  //DO USUNIECIA TYLKO DO TESTOW
    int id, idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    Adresat();
    //gettery
    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
    //settery
    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);
};

#endif // ADRESAT_H_INCLUDED
