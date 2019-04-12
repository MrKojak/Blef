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
    int ilosc_kart;
    void check();
    void licytacja(START s);
    void ile_graczy_ogol(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,START s);
    void draw(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,vector<int>& arr);
    friend class Gracz;
    void wczytaj_karte(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,START s);

    vector<int> random(vector<int>& arr)
    {
        srand(unsigned(time(0)));  //tasowanie

        for(int i=0,k=9;i<6;++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                arr.push_back(k);	//wkladanie 24 kart 6x4
            }
            k++;
        }

        random_shuffle(arr.begin(), arr.end()); //tasowanie
        random_shuffle(arr.begin(), arr.end()); //tasowanie

        cout << "Potasowany deck: ";
        for (vector<int>::iterator i = arr.begin(); i != arr.end(); ++i) //wyswietlanie tego (ogarnac)!!!
            cout << ' ' << *i;
       cout << endl; //koniec tasowania
       return arr;

        }

        start()
        {
            do//ustalanie ilosci graczy i kart
            {
                cout<<"Witaj w grze blef \n9-9 \n10-D \njopek-J \ndama-Q \nkrol-K \nAs-A \nPodaj ilosc graczy 2-5"<<endl;
                cin>>ilosc_graczy;

            }while(ilosc_graczy<2||ilosc_graczy>5);
        }

};
class Gracz
{
    public:
    int ile_k = 0;
    int ile_k_o = 0;
    int reka[5];


    friend void wczytaj_karte(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5);
    friend void draw(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,vector<int>& arr);
};

void START::ile_graczy_ogol(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,START s)
{
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
	}
    s.ilosc_kart = g1.ile_k_o+g2.ile_k_o+g3.ile_k_o+g4.ile_k_o+g5.ile_k_o;
return s;

}
void START::licytacja(START g)
{
        bool tura=1;//nie pamietam do czego //do rozwiniecia
        int ilosc_1_ogol = 0;
        int czyja_kolej=0;//kazdy gracz bedzie mial swoj indeks i to bedzie od tego zeby po kolej tura szla // do rozwiniecia
        char licytacja[5];//tablica do kart zalicytowanych
        bool decyzja=0; //0-sprawdzam    1-przebijam
    do{
        if(czyja_kolej=0)       //licytacja
        {
            cout<<"Czym podbijesz stawke?:"<<endl;
            cin>>licytacja;//tablica na licytacje aktualna
            cout<<endl;
        }

        else cout<<"Przebijasz czy Sprawdzasz? (1-przebijam/0-sprawdzam) ?"<<endl;
        cin>>decyzja;
        if(decyzja==0)
        {
        //sprawdz:{
            cout<<"A wiec sprawdzasz"<<endl;
        //}
        } //goto sprawdz;
        cout<<"Wiec czym przebijasz?"<<endl;
        cin>>licytacja;
        cout<<endl;
        cout<<"check"<<endl;

        for(int i=0;i<g.ilosc_graczy;i++)
        {
            if(i==0) cout<<"przebiles: "<<endl;
                cout<<licytacja[i]<<" ";
        }

        break;
    }while(tura==1);
}
void START::wczytaj_karte(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5,START s)
{

switch(s.ilosc_graczy) //W CHUJ WAZNE!!! TO BEDZIE W CHUJ LEPSZE NA WSKANIKACH, WYKONAC!!!!!! :D
	{
		//dokonczyc
		int x=1;
		switch(x)
		{
			case
			1:
			cout<<"Grasz 1, Twoja reka: "; //pokaz reke 1 graczowi
			for(int i=0;i<g1.ile_k_o;i++)   //pokazuje tyle kart ile dany gracz ma xD
			{
				if(g1.reka[i]==11)	//konwersja, wyswietlanie zamiast 11 to J (jopek)
				{
					cout<<"J ";
					continue;
				}
				if(g1.reka[i]==12)	//analogicznie
				{
					cout<<"Q ";
					continue;
				}
				if(g1.reka[i]==13)
				{
					cout<<"K ";
					continue;
				}
				if(g1.reka[i]==14)
				{
					cout<<"A ";
					continue;
				}
				cout<<g1.reka[i]<<" ";
			}


			case
			2:
			cout<<"Grasz 2, Twoja reka: "; //pokaz reke 2 graczowi
			for(int i=0;i<g2.ile_k_o;i++)
			{
				if(g2.reka[i]==11)  //analogicznie
				{
					cout<<"J ";
					continue;
				}
				if(g2.reka[i]==12)
				{
					cout<<"Q ";
					continue;
				}
				if(g2.reka[i]==13)
				{
					cout<<"K ";
					continue;
				}
				if(g2.reka[i]==14)
				{
					cout<<"A ";
					continue;
				}
				cout<<g2.reka[i]<<" ";
			}

			case
			3:
			cout<<"Grasz 3, Twoja reka: "; //pokaz reke
				for(int i=0;i<g3.ile_k_o;i++)
				{
					if(g3.reka[i]==11)
					{
						cout<<"J ";
						continue;
					}
					if(g3.reka[i]==12)
					{
						cout<<"Q ";
						continue;
					}
					if(g3.reka[i]==13)
					{
						cout<<"K ";
						continue;
					}
					if(g3.reka[i]==14)
					{
						cout<<"A ";
						continue;
					}
					cout<<g3.reka[i]<<" ";
				}


			case
			4:
			cout<<"Grasz 4, Twoja reka: "; //pokaz reke
				for(int i=0;i<g4.ile_k_o;i++)
				{
					if(g4.reka[i]==11)
					{
						cout<<"J ";
						continue;
					}
					if(g4.reka[i]==12)
					{
						cout<<"Q ";
						continue;
					}
					if(g4.reka[i]==13)
					{
						cout<<"K ";
						continue;
					}
					if(g4.reka[i]==14)
					{
						cout<<"A ";
						continue;
					}
					cout<<g4.reka[i]<<" ";
				}


			case
			5:
			cout<<"Grasz 5, Twoja reka: "; //pokaz reke
				for(int i=0;i<g5.ile_k_o;i++)
				{
					if(g5.reka[i]==11)
					{
						cout<<"J ";
						continue;
					}
					if(g5.reka[i]==12)
					{
						cout<<"Q ";
						continue;
					}
					if(g5.reka[i]==13)
					{
						cout<<"K ";
						continue;
					}
					if(g5.reka[i]==14)
					{
						cout<<"A ";
						continue;
					}
					cout<<g5.reka[i]<<" ";
				}
			}
		x++;
	}
}

void START::draw(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5, vector<int>& arr)
{
    int karty_rozdane=0;
    int gr1=0,gr2=0,gr3=0,gr4=0,gr5=0;

    if(g1.ile_k<g1.ile_k_o)//1 gracz
	{
		g1.reka[gr1]=arr[gr1+gr2+gr3+gr4+gr5];//za 1 razem: w reke[0] wkladany jest [0] element z "arr"
		cout<<"Gracz 1:"<<g1.reka[gr1]<<endl;
		gr1++;//[indeks] przy kolejnym przejsiu zwieksza indeks przez co daje karte z rozdania w kolejne miejsce w tablicy_[g1.reka]
		g1.ile_k++;//ilosc obecnie kart na reku
		karty_rozdane++;	//laczna ilosc rozdanych kart na stole
	}
	//ilosc_graczy_now++;


	if(g2.ile_k<g2.ile_k_o)//2 gracz
	{
	//if(ilosc_graczy_now==ilosc_graczy)	break;
		g2.reka[gr2]=arr[gr1+gr2+gr3+gr4+gr5];
		cout<<"Gracz 2:"<<g2.reka[gr2]<<endl;
		gr2++;
		g2.ile_k++;
		karty_rozdane++;
	}
//	ilosc_graczy_now++;

	if(g3.ile_k<g3.ile_k_o)//3 gracz
	{
		g3.reka[gr3]=arr[gr1+gr2+gr3+gr4+gr5];
		cout<<"Gracz 3:"<<g3.reka[gr3]<<endl;
		gr3++;
		g3.ile_k++;
		karty_rozdane++;
	}
	//ilosc_graczy_now++;
//if(ilosc_graczy_now==ilosc_graczy)	break;

	if(g4.ile_k<g4.ile_k_o)//4 gracz
	{
		g4.reka[gr4]=arr[gr1+gr2+gr3+gr4+gr5];
		cout<<"Gracz 4:"<<g4.reka[gr4]<<endl;
		gr4++;
		g4.ile_k++;
		karty_rozdane++;
	}
//	ilosc_graczy_now++;

//if(ilosc_graczy_now==ilosc_graczy)	break;
	if(g5.ile_k<g5.ile_k_o)//5 gracz
	{
		g5.reka[gr5]=arr[gr1+gr2+gr3+gr4+gr5];
		cout<<"Gracz 5:"<<g5.reka[gr5]<<endl;
		gr5++;
		g5.ile_k++;
		karty_rozdane++;
	}
	//ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;



}
void check(int ilosc_graczy,int ilosc_kart)
{
    cout<<"Gra: "<<ilosc_graczy<<" graczy"<<endl;
    cout<<"Ilosc: "<<ilosc_kart<<" kart"<<endl;
}



int randomfunc(int j) //do funkcji shuffle(tasowanie)
{
    return rand() % j;
}

int main()
{
    srand(unsigned(time(0)));

    START s;
    Gracz g1; //tworzenie dynamiczne POTRZEBNE
    Gracz g2;
    Gracz g3;
    Gracz g4;
    Gracz g5;

	s.start();

    s.ile_graczy_ogol(g1,g2,g3,g4,g5,s);

    vector<int> arr;

    s.random(arr);

    check(s.ilosc_graczy,s.ilosc_kart);

    s.draw(g1,g2,g3,g4,g5,arr);

    s.wczytaj_karte(g1,g2,g3,g4,g5,s);

    s.licytacja(s);

cout<<"koniec"<<endl;

return 0;
}

