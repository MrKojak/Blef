#include <iostream>
#include <cstdlib>
#include <time.h>
#include <bits/stdc++.h>
#include <windows.h>
#include <string>

using namespace std;

class Gracz;

class START
{
    public:
    int ilosc_graczy;
    int ilosc_kart;
    int tab_licytacja[6];
    int p_licytacja[6];
    int runda=1;
    vector<int> pula_kart;

    void start();
    vector<int> random(vector<int>& arr);
    void check(int ilosc_kart);
    void draw(Gracz& g1,Gracz& g2,Gracz& g3,Gracz& g4,Gracz& g5,vector<int>& arr,int ilosc_kart);
    void wczytaj_karte(Gracz gracz);
    void licytacja(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5);
    void swipe(string bufor,int s);
    void end_game();




};
class Gracz
{
    public:
    int ile_k;
    int ile_k_o;
    int reka[6];
    int nop;

    Gracz(int k=0,int o=1)
    {
        ile_k = k;
        ile_k_o = o;
    }
};
