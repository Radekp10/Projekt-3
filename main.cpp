//testowanie klasy sklep i produkt


#include <iostream>
#include <string>
#include <vector>
#include "produkt.h"
#include "sklep.h"

int main()
{
	using namespace std;

	//Produkt p1;   //pusty produkt

	Produkt p2("Woda mineralna", "Zywiec Zdroj", 2.59, false);	//konstruktor 1 typu
	Napoj p3(p2,1.75);						//konstruktor 2 typu
	Napoj p4("Sok jablkowy", "Hortex", 4.99, false, 0.8);
	Napoj p5("Herbata mrozona", "Nestea", 3.20, true, 0.5);
	
	Warzywo p11("Ziemniaki", "Rolnik polski", 8.90, false, 2);
	Warzywo p12("Marchewki", "Rolnik polski", 4.30, false, 1);

	Owoc p21("Jablka", "Owoce swiata", 3.99, false, 6);
	Owoc p22("Brzoskwinie", "OWOClix", 5.67, false, 4);

	Jogurt p31("Jogurt naturalny", "Bakoma", 2.45, true, 200);
	Jogurt p32("Jogurt owocowy", "Jogobella", 1.99, true, 150);
	Jogurt p33("Serek waniliowy", "Danio", 2.10, true, 140); 
	

	//Produkt * pp1 = &p1;
	//Produkt * pp2 = &p2;
	Produkt * pp3 = &p3;			//utworzenie wskaznikow na obiekty
	Produkt * pp4 = &p4;
	Produkt * pp5 = &p5;

	Produkt * pp11 = &p11;
	Produkt * pp12 = &p12;

	Produkt * pp21 = &p21;
	Produkt * pp22 = &p22;

	Produkt * pp31 = &p31;
	Produkt * pp32 = &p32;
	Produkt * pp33 = &p33;

								//wektor wskaznikow na obiekty
	vector<Produkt *> pp = {pp3,pp4,pp5,pp11,pp12,pp21,pp22,pp31,pp32,pp33};		

	Sklep s1("Sklep Spozywczy Obiekt",pp);			//utworzenie obiektu sklep
	s1.przeglad_stanu_sklepu();				//przeglad stanu sklepu

	return 0;
}
