//klasa bazowa: Produkt i klasy pochodne

#ifndef PRODUKT_H
#define PRODUKT_H

#include <string>
using namespace std;


class Produkt                           //klasa bazowa
{
private:
    string nazwa;
    string firma;
    double cena;
    bool czy_w_lodowce;
public:
    Produkt(const string & n = "brak", const string & f = "brak", double c = 0.0, bool l = 0);      //konstruktor
    virtual void wyswietl() const;      //funkcja wirtualna (bo kazdy obiekt klasy pochodnej bedzie mial troche inne cechy) do wyswietlania cech produktu
    virtual ~Produkt() {}                                                                           //wirtualny destruktor
};


class Napoj : public Produkt            //klasa pochodna dziedziczaca po klasie Produkt
{
private:
    double objetosc;        //wyrazona w litrach
public:
    Napoj(const Produkt & p, double obj = 0);                               //konstrukcja obiektu przy uzyciu obiektu klasy bazowej
    Napoj(const string & n = "brak", const string & f = "brak", double c = 0.0, bool l = 0, double obj = 0.0);  //konstrukcja obiektu i inicjalizacja wszystkich skladowych
    virtual void wyswietl() const;                                          //wirtualna funkcja do wyswietlania cech produktu
};



class Warzywo : public Produkt
{
private:
    double waga;            //wyrazona w kilogramach
public:
    Warzywo(const Produkt & p, double wag = 0);
    Warzywo(const string & n = "brak", const string & f = "brak", double c = 0.0, bool l = 0, double wag = 0.0);
    virtual void wyswietl() const;
};



class Owoc : public Produkt
{
private:
    int sztuki;
public:
    Owoc(const Produkt & p, int szt = 0);
    Owoc(const string & n = "brak", const string & f = "brak", double c = 0.0, bool l = 0, int szt = 0);
    virtual void wyswietl() const;
};



class Jogurt : public Produkt
{
private:
    double waga;            //wyrazona w gramach
public:
    Jogurt(const Produkt & p, double wag = 0.0);
    Jogurt(const string & n = "brak", const string & f = "brak", double c = 0.0, bool l = 0, double wag = 0.0);
    virtual void wyswietl() const;
};
#endif // PRODUKT_H
