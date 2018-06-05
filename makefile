#makefile

__start__: a.out
	./a.out

a.out: main.o produkt.o sklep.o
	g++ main.o produkt.o sklep.o

main.o: main.cpp produkt.h sklep.h
	g++ -c -Wall main.cpp

sklep.o: sklep.h produkt.h sklep.cpp
	g++ -c -Wall sklep.cpp

produkt.o: produkt.h produkt.cpp
	g++ -c -Wall produkt.cpp

clean: 
	rm main.o produkt.o sklep.o a.out
