#include <iostream>
#include <string>
#include "Player.cpp"
using namespace std;

class Player
{
public:
	string imie;
    int ilosc_k;
	bool alive; //czy grasz wciaz "zyje" gra
    funkcja_sterujaca();

	Player(string="random",int=1,int=1);
    ~Player();
};

class Cards
{
public:
	int cross; //do porownywania wartosci z nazwami (jopek itp)
    int wartosc;
	bool alive; //czy grasz wciaz "zyje" gra

	Cards();
    ~Cards();

protected:
			draw(); //kto zaczyna ,kto juz nie gra (>5 -kart) itp
			licytacja(); //interpreter kart, porownywanie , kto wygral (podbij/sprawdz) itp
			random_card(); //tasowanie
};
