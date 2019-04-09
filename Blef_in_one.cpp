#include <iostream>
#include <cstdlib>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int randomfunc(int j) 
{ 
    return rand() % j; 
} 

int main()
{
	int ilosc_graczy=0,ilosc_graczy_now=0;
	int ilosc_1_ogol=0,ilosc_2_ogol=0,ilosc_3_ogol=0,ilosc_4_ogol=0,ilosc_5_ogol=0;
	int ilosc_1_now=0,ilosc_2_now=0,ilosc_3_now=0,ilosc_4_now=0,ilosc_5_now=0;
	int reka1[5];
	int reka2[5];
	int reka3[5];
	int reka4[5];
	int reka5[5];
	
	do//ustalanie ilosci graczy i kart
	{
		cout<<"Witaj w grze blef \n9-9 \n10-D \njopek-J \ndama-Q \nkrol-K \nAs-A \nPodaj ilosc graczy 2-5"<<endl;
    	cin>>ilosc_graczy;
	}while(ilosc_graczy<2||ilosc_graczy>5);
	
	switch(ilosc_graczy) //inicjalizacja ilosci graczy
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
	int ilosc_kart=ilosc_1_ogol+ilosc_2_ogol+ilosc_3_ogol+ilosc_4_ogol+ilosc_5_ogol;
	srand(unsigned(time(0)));  //tasowanie
    vector<int> arr; 
   
    for(int i=0,k=9;i<6;++i)
    {
    	for (int j = 0; j < 4; ++j) 
  		{
  			arr.push_back(k);	
  		}
  		k++;
	} 
  
    random_shuffle(arr.begin(), arr.end()); 
    random_shuffle(arr.begin(), arr.end(), randomfunc); 
  
    cout << "Potasowany deck: "; 
    for (vector<int>::iterator i = arr.begin(); i != arr.end(); ++i) 
        cout << ' ' << *i; 
   cout << endl; //koniec tasowania

cout<<"Gra: "<<ilosc_graczy<<" graczy"<<endl;
cout<<"Ilosc: "<<ilosc_kart<<" kart"<<endl;

for(int karty_rozdane=0,g1=0,g2=0,g3=0,g4=0,g5=0;ilosc_1_now+ilosc_2_now+ilosc_3_now+ilosc_4_now+ilosc_5_now<ilosc_kart;)//rozdawanie
{
	if(ilosc_1_now<ilosc_1_ogol)//1 gracz
	{
		reka1[g1]=arr[g1+g2+g3+g4+g5];
		cout<<"Gracz 1:"<<reka1[g1]<<endl;
		g1++;
		ilosc_1_now++;
		karty_rozdane++;	
	}
	//ilosc_graczy_now++;
	if (karty_rozdane>=ilosc_kart) break;

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

bool tura=1;
//rozgrywka
do
{
	int czyja_kolej=0;
	char licytacja[5];
	bool decyzja=0; //0-sprawdzam    1-przebijam
	
	cout<<"Grasz 1, Twoja reka: "; //pokaz reke
	for(int i=0;i<ilosc_1_ogol;i++)   
	{
		if(reka1[i]==11)
		{
			cout<<"J "; 
			continue;
		} 
		if(reka1[i]==12)
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

	if(czyja_kolej=0)       //licytacja
	{
		cout<<"Czym podbijesz stawke?:"<<endl;
		cin>>licytacja;
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
}while(ilosc_graczy>1&&ilosc_graczy<6); //koniec gry

cout<<"koniec"<<endl;

return 0;
}
