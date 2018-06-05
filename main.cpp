//testowanie klasy sklep i produkt

#include <iostream>
#include <string>
#include <vector>
#include "produkt.h"
#include "sklep.h"


int main()
{
	using namespace std;

                                                                    //utworzenie bazy produktow

	//Produkt p1;   //pusty produkt
	Produkt p2("Woda mineralna", "Zywiec Zdroj", 2.59, false,500);	//konstruktor 1 typu
	Napoj p3(p2,1.75);                                              //konstruktor 2 typu
	Napoj p4("Sok jablkowy", "Hortex", 4.99, false, 200, 0.8);
	Napoj p5("Herbata mrozona", "Nestea", 3.20, true, 100, 0.5);

	Warzywo p11("Ziemniaki", "Rolnik polski", 8.90, false, 50, 2);
	Warzywo p12("Marchewki", "Rolnik polski", 4.30, false, 30, 1);

	Owoc p21("Jablka", "Owoce swiata", 3.99, false, 45, 6);
	Owoc p22("Brzoskwinie", "OWOClix", 5.67, false, 30, 4);

	Jogurt p31("Jogurt naturalny", "Bakoma", 2.45, true, 55, 200);
	Jogurt p32("Jogurt owocowy", "Jogobella", 1.99, true, 45, 150);
	Jogurt p33("Serek waniliowy", "Danio", 2.10, true, 40, 140);

	Pieczywo p41("Chleb zwykly", "Kraina chlebow", 1.99, false, 70, 1);
	Pieczywo p42("Bulka pelnoziarnista", "Piekarnia domowa", 0.50, false, 80, 1);
	Pieczywo p43("Chleb wieloziarnisty", "Piekarnia domowa", 2.50, false, 40, 1);

	Wedlina p51("Krakowska sucha", "Sokolow", 3.58, true, 30, 150);
	Wedlina p52("Poledwica sopocka", "Kraina wedlin", 4.89, true, 35, 150);



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

	Produkt * pp41 = &p41;
	Produkt * pp42 = &p42;
	Produkt * pp43 = &p43;

	Produkt * pp51 = &p51;
	Produkt * pp52 = &p52;

													//wektor wskaznikow na obiekty
	vector<Produkt *> pp = {pp3,pp4,pp5,pp11,pp12,pp21,pp22,pp31,pp32,pp33,pp41,pp42,pp51,pp52};

	Sklep s1("Sklep Spozywczy Obiekt",pp);			//utworzenie obiektu sklep
	s1.przeglad_stanu_sklepu();						//przeglad stanu sklepu



	//testowanie operacji kupna
	cout << "\t\t******************************\n";
	cout << "Operacja kupna: zakup 50 produktow" << endl << endl;
	cout << "Stan poczatkowy: " << endl;
	pp41->wyswietl();
	if (s1.kupno(pp41,50)==true)
    {
        cout << "Stan po operacji kupna: " << endl;
        pp41->wyswietl();
    }
    else
		cout << "Niepowodzenie operacji kupna." << endl;



	//testowanie operacji sprzedazy 1
	cout << "\t\t******************************\n";
	cout << "Operacja sprzedazy: sprzedaz 50 produktow" << endl << endl;
	cout << "Stan poczatkowy: " << endl;
	pp4->wyswietl();
	if (s1.sprzedaz(pp4,50)==true)
	{
		cout << "Stan po operacji sprzedazy: " << endl;
		pp4->wyswietl();
	}
	else
		cout << "Niepowodzenie operacji sprzedazy.  Jest niewystarczajaca liczba dostepnych produktow." << endl;



	//testowanie operacji sprzedazy	2
	cout << "\t\t******************************\n";
	cout << "Operacja sprzedazy: sprzedaz 100 produktow" << endl << endl;
	cout << "Stan poczatkowy: " << endl;
	pp31->wyswietl();
	if (s1.sprzedaz(pp31,100)==true)
	{
		cout << "Stan po operacji sprzedazy: " << endl;
		pp31->wyswietl();
	}
	else
	{
		cout << "Niepowodzenie operacji sprzedazy. \nJest niewystarczajaca liczba dostepnych produktow.\n" << endl;
	}


	//testowanie operacji sprzedazy 3
	cout << "\t\t******************************\n";
	cout << "Operacja sprzedazy: sprzedaz 100 produktow" << endl << endl;
	cout << "Stan poczatkowy: " << endl;
	pp43->wyswietl();
	if (s1.sprzedaz(pp43,100)==true)
	{
		cout << "Stan po operacji sprzedazy: " << endl;
		pp43->wyswietl();
	}
	else
	{
		cout << "Niepowodzenie operacji sprzedazy.\n" << endl;
	}




	return 0;
}
