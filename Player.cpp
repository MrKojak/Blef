#include <iostream>
#include <string>
#include "Headers.h"
using namespace std;

Player::Player(string i,int i_k,bool l)
	{
        imie = i;
        ilosc_k = i_k;
        alive = l;
	}
Player::~Player(){}

void Player::funkcja_sterujaca()
{
    int ilosc_graczy = 0;
	menu(); //ilosc graczy itp
	start_gry();
	{


    /*funkcje itp (cala gra)
    p1.draw();
    z1.licytacja();
    itp

    player p2;
    z2.dodaj_zwierze();
    z2.daj_glos();
    */
	};
}
