#ifndef METODYPOMOCNICZE_H_INCLUDED
#define METODYPOMOCNICZE_H_INCLUDED

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
public:
     static string konwerjsaIntNaString(int liczba);
     static string wczytajLinie();
     static int konwersjaStringNaInt(string liczba);
     static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
     static string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif // METODYPOMOCNICZE_H_INCLUDED
