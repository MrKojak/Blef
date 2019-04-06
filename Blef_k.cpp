//tablica-24 karty
//tablica (reka)


#include <iostream>
using namespace std;

class player
{
public:
	string Imie;
    int ilosc_k;
	bool alive; //czy grasz wciaz "zyje" gra
	

	Life_player(string="random",int=1,bool=1);
   ~Life_player();
	
};

class cards
{
public:
	int cross=; //do porownywania wartosci z nazwami (jopek itp)
    int wartosc;
	bool alive; //czy grasz wciaz "zyje" gra
	

	T_card();
   ~T_card();
			draw(); //kto zaczyna ,kto juz nie gra (>5 -kart) itp
			licytacja(); //interpreter kart, porownywanie , kto wygral (podbij/sprawdz) itp
			random_card(); //tasowanie	
};

T_card::T_card()
{
   	// cos
};

T_card::~T_card()
{
   	// cos
};


Life_player::Life_player(string name,int ilosc,bool a)
{
	Imie=name;
	ilosc_k=ilosc;
	alive=a;
	dynamiczna_tablica_kart_gracza(ilosc);
};

Life_player::~Life_player()
{
   	// cos
};

void tasowanie()
{
	tablica_na_karty;
};


void funkcja sterujaca()
{	
ilosc_graczy=0;
	menu(); //ilosc graczy itp
	start gry()
	{
		player p1;
		
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
