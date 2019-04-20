#include <iostream>
#include <cstdlib>
#include <time.h>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

class Gracz;

class START
{
    public:
    int ilosc_graczy;
    int ilosc_kart;//Nie u¿ywana, na razie


    void start();
    vector<int> random(vector<int>& arr);
    void check(int ilosc_kart);
    void draw(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,vector<int>& arr,int ilosc_kart);
    void wczytaj_karte(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5);
    void licytacja();




};
class Gracz
{
    public:
    int ile_k;
    int ile_k_o;
    int reka[5];

    Gracz(int k=0,int o=0)
    {
        ile_k = k; ile_k_o = o;
    }
};
