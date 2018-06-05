//klasa Sklep

#ifndef SKLEP_H
#define SKLEP_H

#include "produkt.h"
#include <string>
#include <vector>
using namespace std;


class Sklep
{
private:
    string nazwa_sklepu;
    vector<Produkt *> produkty;         //wektor przechowujacy produkty dostepne w sklepie (wektor wskaznikow na obiekt bazowy)

public:
    //Sklep(const string & n, Produkt * p1, Produkt * p2, Produkt * p3 );
    Sklep(const string & n, vector<Produkt *> prod);
    ~Sklep() {}
    void przeglad_stanu_sklepu() const;
    //void kupno();                     //niezaimplementowane
    //void sprzedaz();                  //niezaimplementowane

};

#endif // SKLEP_H
