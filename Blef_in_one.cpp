#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	int ilosc_graczy=0;
	int ilosc_1_ogol=3,ilosc_2_ogol=4;
	int ilosc_1_now=0,ilosc_2_now=0;
	int ilosc_kart=ilosc_1_ogol+ilosc_2_ogol;
	
	do
	{
		cout<<"Witaj w grze blef, Podaj ilosc graczy 2-5"<<endl;
    	cin>>ilosc_graczy;
	}while(ilosc_graczy<2||ilosc_graczy>5);
	int reka1[5];
	int reka2[5];
	srand( time( NULL ) );
	int deck[24]={9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12,13,13,13,13,14,14,14,14}; //tablica kart
	int licznik=0;
	for(int i=0;i<15;i++)//tasowanie
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

for(int i=0,j=0;ilosc_1_now+ilosc_2_now<=ilosc_kart;)//rozdawanie
{
	if(ilosc_1_now<ilosc_1_ogol)//1 gracz
	{
		reka1[i]=deck[i];
		cout<<"Gracz1:"<<reka1[i]<<endl;
		i++;
		ilosc_1_now++;	
	}
	if(ilosc_2_now<ilosc_2_ogol)//2 gracz
	{
		reka2[j]=deck[j+i];
		cout<<"Gracz2:"<<reka2[j]<<endl;
		j++;
		ilosc_2_now++;
	}
	
	
}





	
	

return 0;
}
