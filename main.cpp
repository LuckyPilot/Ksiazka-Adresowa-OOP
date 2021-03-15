#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (ksiazkaAdresowa.pobierzWybor())
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (ksiazkaAdresowa.pobierzWybor())
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunWybranegoAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujWybranegoAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
    return 0;
}



// Testy AdresatMenager
#include "AdresatMenager.h"
int testy_main()
{
    AdresatMenager adresatMenager("Adresaci.txt",2);
    adresatMenager.wyswietlWszystkichAdresatow();
    adresatMenager.dodajAdresata();
    adresatMenager.wyswietlWszystkichAdresatow();
    return 0;
}
