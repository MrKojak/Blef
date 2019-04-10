#include <iostream>
#include <cstdlib>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> random(vector<int> arr)
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

int randomfunc(int j) //do funkcji shuffle(tasowanie)
{
    return rand() % j;
}

int main()
{
	int ilosc_graczy=0,ilosc_graczy_now=0; //docelwo do okreslenia ile graczy gra, //do rozwiniecia
	int ilosc_1_ogol=0,ilosc_2_ogol=0,ilosc_3_ogol=0,ilosc_4_ogol=0,ilosc_5_ogol=0;//ile ogolnie kart powinien posiadac gracz
	int ilosc_1_now=0,ilosc_2_now=0,ilosc_3_now=0,ilosc_4_now=0,ilosc_5_now=0;//ile posiada aktualnie (przy rozdawaniu)
	int reka1[5];//tablica na karty 1 gracza
	int reka2[5];//analogicznie ^^
	int reka3[5];
	int reka4[5];
	int reka5[5];

	do//ustalanie ilosci graczy i kart
	{
		cout<<"Witaj w grze blef \n9-9 \n10-D \njopek-J \ndama-Q \nkrol-K \nAs-A \nPodaj ilosc graczy 2-5"<<endl;
    	cin>>ilosc_graczy;
	}while(ilosc_graczy<2||ilosc_graczy>5);

	switch(ilosc_graczy) //inicjalizacja ilosci graczy, przydzielanie ilosci kart
	{
		case 1:
		ilosc_1_ogol=1; cout<<"gracie w: "<<ilosc_graczy<<" graczy"<<endl; break;

		case 2:
		ilosc_1_ogol=1; ilosc_2_ogol=1; cout<<"gracie w: "<<ilosc_graczy<<" graczy"<<endl; break;

		case 3:
		ilosc_1_ogol=1; ilosc_2_ogol=1; ilosc_3_ogol=1; cout<<"gracie w: "<<ilosc_graczy<<" graczy"<<endl; break;

		case 4:
		ilosc_1_ogol=1; ilosc_2_ogol=1; ilosc_3_ogol=1; ilosc_4_ogol=1;
		cout<<"gracie w: "<<ilosc_graczy<<" graczy"<<endl; break;
		case 5:
		ilosc_1_ogol=5; ilosc_2_ogol=2; ilosc_3_ogol=2; ilosc_4_ogol=3; ilosc_5_ogol=3;
		cout<<"gracie w: "<<ilosc_graczy<<" graczy"<<endl; break;
	}

do//glowna funkcja sterujaca
{
	int ilosc_kart=ilosc_1_ogol+ilosc_2_ogol+ilosc_3_ogol+ilosc_4_ogol+ilosc_5_ogol;//ilosc kart ogolnie to suma kart wszytskich graczy //do rozwiniecia

	 vector<int> arr;

	random(arr);

cout<<"Gra: "<<ilosc_graczy<<" graczy"<<endl;
cout<<"Ilosc: "<<ilosc_kart<<" kart"<<endl;

for(int karty_rozdane=0,g1=0,g2=0,g3=0,g4=0,g5=0;ilosc_1_now+ilosc_2_now+ilosc_3_now+ilosc_4_now+ilosc_5_now<ilosc_kart;)//rozdawanie (wykonuj dopoki ilosc kart rozdanych jest mniejsza od ilosci kart ktora powinna byc
{
	//g1,g2,g3,g4,g5 sa do indeksowania tablicy-reki
	if(ilosc_1_now<ilosc_1_ogol)//1 gracz
	{
		reka1[g1]=arr[g1+g2+g3+g4+g5];//za 1 razem: w reke[0] wkladany jest [0] element z "arr"
		cout<<"Gracz 1:"<<reka1[g1]<<endl;
		g1++;//[indeks] przy kolejnym przejsiu zwieksza indeks przez co daje karte z rozdania w kolejne miejsce w tablicy_[reka1]
		ilosc_1_now++;//ilosc obecnie kart na reku
		karty_rozdane++;	//laczna ilosc rozdanych kart na stole
	}
	//ilosc_graczy_now++;
	if (karty_rozdane>=ilosc_kart) break;//jesli karty juz rozdane = ilosc kart ktora powinna byc na stole, to przestan rozdawac

	if(ilosc_2_now<ilosc_2_ogol)//2 gracz
	{
	//if(ilosc_graczy_now==ilosc_graczy)	break;
		reka2[g2]=arr[g1+g2+g3+g4+g5];
		cout<<"Gracz 2:"<<reka2[g2]<<endl;
		g2++;
		ilosc_2_now++;
		karty_rozdane++;
	}
//	ilosc_graczy_now++;

	if(ilosc_3_now<ilosc_3_ogol)//3 gracz
	{
		reka3[g3]=arr[g1+g2+g3+g4+g5];
		cout<<"Gracz 3:"<<reka3[g3]<<endl;
		g3++;
		ilosc_3_now++;
		karty_rozdane++;
	}
	//ilosc_graczy_now++;
//if(ilosc_graczy_now==ilosc_graczy)	break;

	if(ilosc_4_now<ilosc_4_ogol)//4 gracz
	{
		reka4[g4]=arr[g1+g2+g3+g4+g5];
		cout<<"Gracz 4:"<<reka4[g4]<<endl;
		g4++;
		ilosc_4_now++;
		karty_rozdane++;
	}
//	ilosc_graczy_now++;

//if(ilosc_graczy_now==ilosc_graczy)	break;
	if(ilosc_5_now<ilosc_5_ogol)//5 gracz
	{
		reka5[g5]=arr[g1+g2+g3+g4+g5];
		cout<<"Gracz 5:"<<reka5[g5]<<endl;
		g5++;
		ilosc_5_now++;
		karty_rozdane++;
	}
	//ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;
	//if (karty_rozdane>=ilosc_kart) break;
//if(ilosc_graczy_now==ilosc_graczy)	break;

}

bool tura=1;//nie pamietam do czego //do rozwiniecia

//rozgrywka
do
{
	int czyja_kolej=0;//kazdy gracz bedzie mial swoj indeks i to bedzie od tego zeby po kolej tura szla // do rozwiniecia
	char licytacja[5];//tablica do kart zalicytowanych
	bool decyzja=0; //0-sprawdzam    1-przebijam



	switch(ilosc_graczy) //W CHUJ WAZNE!!! TO BEDZIE W CHUJ LEPSZE NA WSKANIKACH, WYKONAC!!!!!! :D
	{
		//dokonczyc
		int x=1;
		switch(x)
		{
			case
			1:
			cout<<"Grasz 1, Twoja reka: "; //pokaz reke 1 graczowi
			for(int i=0;i<ilosc_1_ogol;i++)   //pokazuje tyle kart ile dany gracz ma xD
			{
				if(reka1[i]==11)	//konwersja, wyswietlanie zamiast 11 to J (jopek)
				{
					cout<<"J ";
					continue;
				}
				if(reka1[i]==12)	//analogicznie
				{
					cout<<"Q ";
					continue;
				}
				if(reka1[i]==13)
				{
					cout<<"K ";
					continue;
				}
				if(reka1[i]==14)
				{
					cout<<"A ";
					continue;
				}
				cout<<reka1[i]<<" ";
			}


			case
			2:
			cout<<"Grasz 2, Twoja reka: "; //pokaz reke 2 graczowi
			for(int i=0;i<ilosc_2_ogol;i++)
			{
				if(reka2[i]==11)  //analogicznie
				{
					cout<<"J ";
					continue;
				}
				if(reka2[i]==12)
				{
					cout<<"Q ";
					continue;
				}
				if(reka2[i]==13)
				{
					cout<<"K ";
					continue;
				}
				if(reka2[i]==14)
				{
					cout<<"A ";
					continue;
				}
				cout<<reka2[i]<<" ";
			}

			case
			3:
			cout<<"Grasz 3, Twoja reka: "; //pokaz reke
				for(int i=0;i<ilosc_3_ogol;i++)
				{
					if(reka3[i]==11)
					{
						cout<<"J ";
						continue;
					}
					if(reka3[i]==12)
					{
						cout<<"Q ";
						continue;
					}
					if(reka3[i]==13)
					{
						cout<<"K ";
						continue;
					}
					if(reka3[i]==14)
					{
						cout<<"A ";
						continue;
					}
					cout<<reka3[i]<<" ";
				}


			case
			4:
			cout<<"Grasz 4, Twoja reka: "; //pokaz reke
				for(int i=0;i<ilosc_4_ogol;i++)
				{
					if(reka4[i]==11)
					{
						cout<<"J ";
						continue;
					}
					if(reka4[i]==12)
					{
						cout<<"Q ";
						continue;
					}
					if(reka4[i]==13)
					{
						cout<<"K ";
						continue;
					}
					if(reka4[i]==14)
					{
						cout<<"A ";
						continue;
					}
					cout<<reka4[i]<<" ";
				}


			case
			5:
			cout<<"Grasz 5, Twoja reka: "; //pokaz reke
				for(int i=0;i<ilosc_5_ogol;i++)
				{
					if(reka5[i]==11)
					{
						cout<<"J ";
						continue;
					}
					if(reka5[i]==12)
					{
						cout<<"Q ";
						continue;
					}
					if(reka5[i]==13)
					{
						cout<<"K ";
						continue;
					}
					if(reka5[i]==14)
					{
						cout<<"A ";
						continue;
					}
					cout<<reka5[i]<<" ";
				}
			}
		x++;
	}


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

	for(int i=0;i<ilosc_1_ogol;i++)
	{
		if(i==0) cout<<"przebiles: "<<endl;
			cout<<licytacja[i]<<" ";
	}

	break;
	}while(tura==1);

break;
}while(ilosc_graczy>1&&ilosc_graczy<6); //koniec gry gdy zostanie mniej niz 2 graczy

cout<<"koniec"<<endl;

return 0;
}
