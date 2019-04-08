#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	int ilosc_graczy=0,ilosc_graczy_now=0;
	int ilosc_1_ogol=0,ilosc_2_ogol=0,ilosc_3_ogol=0,ilosc_4_ogol=0,ilosc_5_ogol=0;
	int ilosc_1_now=0,ilosc_2_now=0,ilosc_3_now=0,ilosc_4_now=0,ilosc_5_now=0;
	
	do
	{
		cout<<"Witaj w grze blef, Podaj ilosc graczy 2-5"<<endl;
    	cin>>ilosc_graczy;
	}while(ilosc_graczy<2||ilosc_graczy>5);
	
	switch(ilosc_graczy) //ustalanie ilosci graczy i kart
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
		ilosc_1_ogol=1; ilosc_2_ogol=1; ilosc_3_ogol=2; ilosc_4_ogol=1; ilosc_5_ogol=1; 
		cout<<"gracie w: "<<ilosc_graczy<<" graczy"<<endl; break;
	}
	int reka1[5];
	int reka2[5];
	int reka3[5];
	int reka4[5];
	int reka5[5];
	srand( time( NULL ) );
	int deck[24]={9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12,13,13,13,13,14,14,14,14}; //tablica kart
	
do//glowna funkcja sterujaca
{	

	int ilosc_kart=ilosc_1_ogol+ilosc_2_ogol+ilosc_3_ogol+ilosc_4_ogol+ilosc_5_ogol;
	int licznik=0;//licznik
	for(int i=0;i<15;i++)//tasowanie-14 razy
	{
		int j=0;
    	int x=0;
		for(int i=0; i<24; i++) 
    	{	
    		j = rand()%23;
    		x=deck[j];
   			deck[j]=deck[i];
       	 	deck[i]=x;
        
       	 	if(licznik==14) 
				{
					cout<<i+1<<":"<<deck[i]<<endl;
				}
    	}
    	licznik++;
	} 


cout<<"Gra: "<<ilosc_graczy<<" graczy"<<endl;
cout<<"Ilosc: "<<ilosc_kart<<" kart"<<endl;
string naz;
getline (cin,naz);

for(int karty_rozdane=0,g1=0,g2=0,g3=0,g4=0,g5=0;ilosc_1_now+ilosc_2_now+ilosc_3_now+ilosc_4_now+ilosc_5_now<ilosc_kart;)//rozdawanie
{
	if(ilosc_1_now<ilosc_1_ogol)//1 gracz
	{
		reka1[g1]=deck[g1+g2+g3+g4+g5];
		cout<<"Gracz 1:"<<reka1[g1]<<endl;
		g1++;
		ilosc_1_now++;
		karty_rozdane++;	
	}
	//ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;
	if (karty_rozdane>=ilosc_kart) break;

	if(ilosc_2_now<ilosc_2_ogol)//2 gracz
	{
	//if(ilosc_graczy_now==ilosc_graczy)	break;
		reka2[g2]=deck[g1+g2+g3+g4+g5];
		cout<<"Gracz 2:"<<reka2[g2]<<endl;
		cout<<"Gracz 2:"<<reka2[g2+1]<<endl;
		g2++;
		ilosc_2_now++;
		karty_rozdane++;
		
	}
//	ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;

	if(ilosc_3_now<ilosc_3_ogol)//3 gracz
	{
		reka3[g3]=deck[g1+g2+g3+g4+g5];
		cout<<"Gracz 3:"<<reka3[g3]<<endl;
		g3++;
		ilosc_3_now++;
		karty_rozdane++;
	}
	//ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;
	
//if(ilosc_graczy_now==ilosc_graczy)	break;
	if(ilosc_4_now<ilosc_4_ogol)//4 gracz
	{
		reka4[g4]=deck[g1+g2+g3+g4+g5];
		cout<<"Gracz 4:"<<reka4[g4]<<endl;
		g4++;
		ilosc_4_now++;
		karty_rozdane++;
	}
//	ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;
//if(ilosc_graczy_now==ilosc_graczy)	break;
	if(ilosc_5_now<ilosc_5_ogol)//5 gracz
	{
		reka5[g5]=deck[g1+g2+g3+g4+g5];
		cout<<"Gracz 5:"<<reka5[g5]<<endl;
		g5++;
		ilosc_5_now++;
		karty_rozdane++;
	}
	//ilosc_graczy_now++;
	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;
	//if (karty_rozdane>=ilosc_kart) break;
//if(ilosc_graczy_now==ilosc_graczy)	break;
	//for
	
	
	
}
//rozgrywka
/*do
{
	
	//for(int i;reka1[i])
	cout<<"Twoja rêka"<<reka[i]<<endl;
	
	
}while();*/



break;

}while(ilosc_graczy>1&&ilosc_graczy<6); //koniec gry

cout<<"koniec"<<endl;



	
	

return 0;
}
