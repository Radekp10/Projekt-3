//metody klasy produkt

#include <iostream>
#include "produkt.h"

using namespace std;

Produkt::Produkt(const string & n, const string & f, double c, bool l)          //konstruktor obiektu Produkt
{
    nazwa=n;                                                //inicjalizacja skladowych
    firma=f;
    cena=c;
    czy_w_lodowce=l;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Produkt::wyswietl() const                              //wypisanie cech danego produktu
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

Napoj::Napoj(const Produkt & p, double obj) : Produkt(p) //uzycie niejawnego konstruktora kopiujacego
{
    objetosc=obj;                                                       //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Napoj::Napoj(const string & n, const string & f, double c, bool l, double obj) : Produkt (n,f,c,l) //lista inicjalizacyjna
{
    objetosc=obj;                                                       //inicjalizacja nowego pola
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Napoj::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Objetosc: " << objetosc << " l" << endl << endl;           //i nowej zawartosci
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////


Warzywo::Warzywo(const Produkt & p, double wag) : Produkt(p)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Warzywo::Warzywo(const string & n, const string & f, double c, bool l, double wag) : Produkt(n,f,c,l)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Warzywo::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Masa w worku: " << waga << " kg" << endl << endl;                  //i nowej zawartosci
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Owoc::Owoc(const Produkt & p, int szt) : Produkt(p)
{
    sztuki=szt;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Owoc::Owoc(const string & n, const string & f, double c, bool l, int szt) : Produkt(n,f,c,l)
{
    sztuki=szt;                                                             //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Owoc::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Liczba sztuk w paczce: " << sztuki <<endl << endl;                  //i nowej zawartosci
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Jogurt::Jogurt(const Produkt & p, double wag) : Produkt(p)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Jogurt::Jogurt(const string & n, const string & f, double c, bool l, double wag) : Produkt(n,f,c,l)
{
    waga=wag;                                                           //inicjalizacja nowego pola
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Jogurt::wyswietl() const
{
    Produkt::wyswietl();                                                //wyswietlenie czesci z klasy bazowej
    cout << "Waga: " << waga << " g" << endl << endl;                  //i nowej zawartosci
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
