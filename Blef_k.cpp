//tablica-24 karty
//tablica (reka)


#include <iostream>
using namespace std;

void menu()
{
    //cos
}//ilosc graczy itp

void start_gry()
{
    //cos
}

class Player
{
public:
	string imie;
    int ilosc_k;
	bool alive; //czy grasz wciaz "zyje" gra
    funkcja_sterujaca();

	Player(string="random",int=1,bool=true);
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
			draw(); //kto zaczyna ,kto juz nie gra (>5 -kart) itp
			licytacja(); //interpreter kart, porownywanie , kto wygral (podbij/sprawdz) itp
			random_card(); //tasowanie
};

Cards::Cards()
{
   	// cos
};

Cards::~Cards()
{
   	// cos
};


Player::Player(string name,int ilosc,bool a)
{
	imie=name;
	ilosc_k=ilosc;
	alive=a;
	//dynamiczna_tablica_kart_gracza(ilosc); ????
};

Player::~Player()
{
   	// cos
};

void tasowanie()
{
	int tablica_na_karty[20];
};


void funkcja_sterujaca()
{
    int ilosc_graczy = 0;
	menu(); //ilosc graczy itp
	start_gry();
	{
       Player p1;

    /*funkcje itp (cala gra)
    p1.draw();
    z1.licytacja();
    itp

    player p2;
    z2.dodaj_zwierze();
    z2.daj_glos();
    */
	};

};

int main()
{
	funkcja_sterujaca();

return 0;
}
