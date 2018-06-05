//metody klasy sklep

#include <iostream>
#include <vector>
#include "produkt.h"
#include "sklep.h"

using namespace std;


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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Sklep::kupno(Produkt * p, double n)
{
    int i;
    bool czy_dostepny=0;
    int liczba_produktow = produkty.size();				//okreslenie liczby produktow dostepnych w sklepie
    for (i=0; i<liczba_produktow; i++)
    {
        if (produkty[i]==p)
        {
            czy_dostepny=1;					            //odnalezienie interesujacego nas produktu
            break;
        }
    }

    if (czy_dostepny==1)
    {
        produkty[i]->dodaj(n);							//zwiekszenie liczby dostepnych produktow o n
        return true;
    }
    else
    {
        cout << "Sklep nie obsluguje takich produktow." << endl;
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Sklep::sprzedaz(Produkt * p, double n)
{
    int i;
    bool czy_dostepny=0;							//0-szukany produkt nie jest dostepny, 1-produkt dostepny w sklepie
    int liczba_produktow = produkty.size();			//okreslenie liczby produktow dostepnych w sklepie
    for (i=0; i<liczba_produktow; i++)
    {
        if (produkty[i]==p)							//odnalezienie interesujacego nas produktu
        {
            czy_dostepny=1;
            break;
        }
    }

    if (czy_dostepny==1)
    {
		if (produkty[i]->odejmij(n))					//zmniejszenie liczby dostepnych produktow
			return true;
		else
			return false;
	}
	else
	{
		cout << "Produkt niedostepny w sklepie\n";  //produkt niedostepny -> nie mozna go kupic
		return false;
	}
}
