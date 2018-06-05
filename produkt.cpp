//metody klasy produkt

#include <iostream>
#include "produkt.h"

using namespace std;



Produkt::Produkt(const string & n, const string & f, double c, bool l, double dost)          //konstruktor obiektu Produkt
{
    nazwa=n;                                                //inicjalizacja skladowych
    firma=f;
    cena=c;
    czy_w_lodowce=l;
    dostepne=dost;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Produkt::wyswietl() const          //wypisanie cech danego produktu
{
    cout << "Produkt: " << nazwa << endl;
    cout << "Firma: " << firma << endl;
    cout << "Cena: " << cena << " zl" << endl;
    cout << "Czy przechowywac w lodowce: ";
    if (czy_w_lodowce==false)
        cout << "NIE" << endl;
    else
        cout << "TAK" << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Produkt::dodaj(double n)			//zwiekszenie liczby dostepnych produktow
{
    dostepne+=n;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Produkt::odejmij(double n)
{
	if (dostepne>=n)					//sprawdzenie czy operacja jest mozliwa do przeprowadzenia
	{							        //(czy jest odpowiedni zapas produktow)
		dostepne-=n;					//zmniejszenie liczby dostepnych produktow
		return true;
	}
	else
		return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Napoj::Napoj(const Produkt & p, double obj) : Produkt(p) //uzycie niejawnego konstruktora kopiujacego
{
    objetosc=obj;                                                       //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Napoj::Napoj(const string & n, const string & f, double c, bool l, double dost, double obj) : Produkt (n,f,c,l,dost) //lista inicjalizacyjna
{
    objetosc=obj;                                                       //inicjalizacja nowego pola
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Napoj::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Objetosc: " << objetosc << " l" << endl;                   //i nowej zawartosci
    cout << "Liczba dostepnych butelek: " << dostepne << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////


Warzywo::Warzywo(const Produkt & p, double wag) : Produkt(p)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Warzywo::Warzywo(const string & n, const string & f, double c, bool l, double dost, double wag) : Produkt(n,f,c,l,dost)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Warzywo::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Masa w worku: " << waga << " kg" << endl;                  //i nowej zawartosci
    cout << "Dostepnych: " << dostepne << " kg" << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Owoc::Owoc(const Produkt & p, int szt) : Produkt(p)
{
    sztuki=szt;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Owoc::Owoc(const string & n, const string & f, double c, bool l, double dost, int szt) : Produkt(n,f,c,l,dost)
{
    sztuki=szt;                                                             //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Owoc::wyswietl() const
{
    Produkt::wyswietl();                                                    //wyswietlenie czesci z klasy bazowej
    cout << "Liczba sztuk w paczce: " << sztuki << endl;                    //i nowej zawartosci
    cout << "Liczba dostepnych sztuk: " << dostepne << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Jogurt::Jogurt(const Produkt & p, double wag) : Produkt(p)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Jogurt::Jogurt(const string & n, const string & f, double c, bool l, double dost, double wag) : Produkt(n,f,c,l,dost)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Jogurt::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Waga: " << waga << " g" << endl;                            //i nowej zawartosci
    cout << "Liczba dostepnych produktow: " << dostepne << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Pieczywo::Pieczywo(const Produkt & p, int szt) : Produkt(p)
{
    sztuki=szt;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Pieczywo::Pieczywo(const string & n, const string & f, double c, bool l, double dost, int szt) : Produkt(n,f,c,l,dost)
{
    sztuki=szt;                                                             //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pieczywo::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Liczba sztuk: " << sztuki << endl;                          //i nowej zawartosci
    cout << "Liczba dostepnych wyrobow: " << dostepne << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Wedlina::Wedlina(const Produkt & p, double wag) : Produkt(p)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Wedlina::Wedlina(const string & n, const string & f, double c, bool l, double dost, double wag) : Produkt(n,f,c,l,dost)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Wedlina::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Waga: " << waga << " g" << endl;                           //i nowej zawartosci
    cout << "Liczba dostepnych opakowan: " << dostepne << endl << endl;
}

