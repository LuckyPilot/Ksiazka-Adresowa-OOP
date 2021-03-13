#ifndef UZYTKOWNIK_H_INCLUDED
#define UZYTKOWNIK_H_INCLUDED

#include <iostream>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    Uzytkownik();
    //settery
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);
    //gettery
    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};
#endif // UZYTKOWNIK_H_INCLUDED
