//metody klasy sklep

#include <iostream>
#include <vector>
#include "produkt.h"
#include "sklep.h"

using namespace std;


//Sklep::Sklep(const string & n, Produkt * p1,Produkt * p2,Produkt * p3 )
Sklep::Sklep(const string & n, vector<Produkt *> prod )             //parametry: nazwa sklepu i wektor produktow

{
    nazwa_sklepu=n;
    produkty=prod;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Sklep::przeglad_stanu_sklepu() const
{
    cout << "\t\t***" << nazwa_sklepu << "***" << endl;
    cout << "Dostepne produkty: " << endl << endl;
    int i;
    int liczba_produktow = produkty.size();             //okreslenie liczby elementow kontenera, czyli liczby produktow
    for (i=0; i<liczba_produktow; i++)
    {
        produkty[i]->wyswietl();                        //wyswietlenie informacji o produkcie
    }
}
