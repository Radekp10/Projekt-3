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
    vector<Produkt *> produkty;             //wektor przechowujacy produkty dostepne w sklepie (wektor wskaznikow na obiekt bazowy)

public:
    Sklep(const string & n, vector<Produkt *> prod);
    ~Sklep() {}
    void przeglad_stanu_sklepu() const;
    bool kupno(Produkt * p, double n);      //operacja zakupu przez sklepproduktow
    bool sprzedaz(Produkt * p, double n);   //operacja sprzedazy przez sklep produktow (pojedynczo lub hurtowo)
};

#endif // SKLEP_H
