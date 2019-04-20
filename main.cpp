#include <iostream>

#include "Headers.hpp"

using namespace std;

int main()
{
    START s;
    Gracz g1;//tworzenie dynamiczne POTRZEBNE
    Gracz g2;
    Gracz g3;
    Gracz g4;
    Gracz g5;

	s.start();


	switch(s.ilosc_graczy) //inicjalizacja ilosci graczy, przydzielanie ilosci kart
	{
		case 1:
        g1.ile_k_o=1; cout<<"gracie w: "<<s.ilosc_graczy<<" graczy"<<endl; break;

		case 2:
		g1.ile_k_o=1; g2.ile_k_o=1; cout<<"gracie w: "<<s.ilosc_graczy<<" graczy"<<endl; break;

		case 3:
		g1.ile_k_o=1; g2.ile_k_o=1; g3.ile_k_o=1; cout<<"gracie w: "<<s.ilosc_graczy<<" graczy"<<endl; break;

		case 4:
		g1.ile_k_o=1; g2.ile_k_o=1; g3.ile_k_o=1; g4.ile_k_o=1;
		cout<<"gracie w: "<<s.ilosc_graczy<<" graczy"<<endl; break;
		case 5:
		g1.ile_k_o=1; g2.ile_k_o=1; g3.ile_k_o=1; g4.ile_k_o=1; g5.ile_k_o=1;
		cout<<"gracie w: "<<s.ilosc_graczy<<" graczy"<<endl; break;
		 cout<<g1.ile_k_o<<endl;
	}
    int ilosc_kart = g1.ile_k_o+g2.ile_k_o+g3.ile_k_o+g4.ile_k_o+g5.ile_k_o;

    vector<int> arr;

    s.random(arr);

    s.check(ilosc_kart);

    s.draw(g1,g2,g3,g4,g5,arr,ilosc_kart);

    s.wczytaj_karte(g1,g2,g3,g4,g5);

    s.licytacja();

cout<<"koniec"<<endl;

return 0;
}

