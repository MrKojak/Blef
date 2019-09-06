#include "Headers.hpp"

void START::start()

{
    do
    {
        cout<<"Witaj w grze blef \n9-9 \n10-D \njopek-J \ndama-Q \nkrol-K \nAs-A \nPodaj ilosc graczy 2-5"<<endl;
        cin>>ilosc_graczy;

    }while(ilosc_graczy<2||ilosc_graczy>5);
}

vector<int> START::random(vector<int>& arr)
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

void START::check(int ilosc_kart)
{
    cout<<"Gra: "<<ilosc_graczy<<" graczy"<<endl;
    cout<<"Ilosc: "<<ilosc_kart<<" kart"<<endl;
}
void START::draw(Gracz& g1,Gracz& g2,Gracz& g3,Gracz& g4,Gracz& g5, vector<int>& arr,int ilosc_kart)
{
    int karty_rozdane=0;
    int gr1=0,gr2=0,gr3=0,gr4=0,gr5=0;
    int numer = 0;
    Gracz  tab_g[5] = {g1,g2,g3,g4,g5};

    do{
    if(tab_g[numer].ile_k<tab_g[numer].ile_k_o)//1 gracz
	{
		tab_g[numer].=arr[gr1+gr2+gr3+gr4+gr5];//za 1 razem: w reke[0] wkladany jest [0] element z "arr"
		pula_kart.push_back(arr[gr1+gr2+gr3+gr4+gr5]);

		cout<<"Gracz "<<numer<<':'<<tab_g[numer]<<endl;


		gr1++;//[indeks] przy kolejnym przejsiu zwieksza indeks przez co daje karte z rozdania w kolejne miejsce w tablicy_[g1.reka]
		g1.ile_k++;//ilosc obecnie kart na reku
		karty_rozdane++;//laczna ilosc rozdanych kart na stole
		numer++;
	}
	//ilosc_graczy_now++;


	if(g2.ile_k<g2.ile_k_o)//2 gracz
	{
	//if(ilosc_graczy_now==ilosc_graczy)	break;
		g2.reka[gr2]=arr[gr1+gr2+gr3+gr4+gr5];
		pula_kart.push_back(arr[gr1+gr2+gr3+gr4+gr5]);
        cout<<"Gracz 2:"<<g2.reka[gr2]<<endl;


		gr2++;
		g2.ile_k++;
		karty_rozdane++;
	}
//	ilosc_graczy_now++;

	if(g3.ile_k<g3.ile_k_o)//3 gracz
	{
		g3.reka[gr3]=arr[gr1+gr2+gr3+gr4+gr5];
		pula_kart.push_back(arr[gr1+gr2+gr3+gr4+gr5]);
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
		pula_kart.push_back(arr[gr1+gr2+gr3+gr4+gr5]);
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
		pula_kart.push_back(arr[gr1+gr2+gr3+gr4+gr5]);
		cout<<"Gracz 5:"<<g5.reka[gr5]<<endl;

		gr5++;
		g5.ile_k++;
		karty_rozdane++;
	}

	}while(karty_rozdane<ilosc_kart);

	cout<<"Ilosc kart rozdanych: "<<karty_rozdane<<endl;

}

void START::wczytaj_karte(Gracz gracz)
{

			cout<<"Grasz " <<gracz.nop<< ", Twoja reka: "; //pokaz reke 1 graczowi
			for(int i=0;i<gracz.ile_k_o;i++)   //pokazuje tyle kart ile dany gracz ma xD
			{
			    cout<<i<<"*"<<endl;
			    if(gracz.reka[i]==9)
				{
					cout<<"9";
					continue;
				}
				if(gracz.reka[i]==10)
				{
					cout<<"10 ";
					continue;
				}
				if(gracz.reka[i]==11)
				{
					cout<<"J ";
					continue;
				}
				if(gracz.reka[i]==12)
				{
					cout<<"Q ";
					continue;
				}
				if(gracz.reka[i]==13)
				{
					cout<<"K ";
					continue;
				}
				if(gracz.reka[i]==14)
				{
					cout<<"A ";
					continue;
				}

            }

}

void START::swipe(string bufor,int s)
{

				if(bufor=="9")	//konwersja, wyswietlanie zamiast 11 to J (jopek)
				{
					tab_licytacja[s] = 9;
				}
				if(bufor=="10")
				{
					tab_licytacja[s] = 10;
				}
				if(bufor=="J")
				{
					tab_licytacja[s] = 11;
				}
				if(bufor=="Q")
				{
					tab_licytacja[s] = 12;
				}
				if(bufor=="K")
				{
					tab_licytacja[s] = 13;
				}
				if(bufor=="A")
				{
					tab_licytacja[s] = 14;
				}
}



void check_figure(int tab_licytacja[],int length)
{
    if(length == 1)
    {
        tab_licytacja[6] = 1;
    }
    if(length == 2)
    {
        tab_licytacja[6] = 2;
    }
    if(length == 3)
    {
        tab_licytacja[6] = 3;
    }
    if(length == 4)
    {
        if(tab_licytacja[0]==tab_licytacja[1]&&tab_licytacja[1]==tab_licytacja[2])
        {
            tab_licytacja[6] = 10;
        }
        else
        {
            tab_licytacja[6] = 4;
        }


    }
    if(length == 5)
    {
        tab_licytacja[6] = 5;
    }
}

void START::end_game()
{
    int j=0;
    for(int i=0;i<pula_kart.size();i++)
    {
        if(tab_licytacja[j] == pula_kart[i])
        {
            j++;
            continue;
        }
    }

    //g1.ile_k_o++
    start();
}

void START::licytacja(Gracz g1,Gracz g2,Gracz g3,Gracz g4,Gracz g5)
{

    int tablica_kart[6];
    bool przebicie;
    string figura;
    string bufor;
    int length;



while(1)
{
    switch(runda)
{



case 1:
            cout<<"Gracz 1 reka: ";
            for(int k=0;k<g1.ile_k;k++)
            {
               cout<<g1.reka[k]<<" ";
            }

    cout<<endl;

    cout<<"Przebijasz czy sprawdzasz?"<<endl;
    cin>>przebicie;

    if(przebicie == 1)
    {
        cout<<"Licytuj:  "<<endl;
        cin>>figura;
        length = figura.size();

        for(int s=0;s<length;s++)
        {
            bufor = figura[s];
            swipe(bufor,s);
            cout<<tab_licytacja[s]<<endl;
        }

       check_figure(tab_licytacja,length);
       cout<<tab_licytacja[6]<<"*"<<endl;

        if(p_licytacja[6] > tab_licytacja[6]);
        {
            for(int j;j<5;j++)
            {
                if(p_licytacja[j] < tab_licytacja[j])
                {
                    cout<<"Wprowadzono nizsza figure, sprobuj jeszcze raz"<<endl;
                    continue;
                }
                else
                {

                }
            }
        }
    }
        else
        {
            cout<<"Wprowadzono nizsza figure, sprobuj jeszcze raz"<<endl;
            continue;
        }

    if(przebicie == 0)
        {
            end_game();
        }



        for(int i;i<length;i++)
        {
            p_licytacja[i] = tab_licytacja[i];
            cout<<p_licytacja[i]<<endl;
        }

            if(runda==ilosc_graczy)
            {
                runda = 1;
                continue;
            }
        runda++;
case 2:
            cout<<"Gracz 2 reka: ";
            for(int k=0;k<g2.ile_k;k++)
            {
               cout<<g2.reka[k]<<" ";
            }

    cout<<endl;

    cout<<"Przebijasz czy sprawdzasz?"<<endl;
    cin>>przebicie;

    if(przebicie == 1)
    {
        cout<<"Licytuj:  "<<endl;
        cin>>figura;
        length = figura.size();

        for(int s=0;s<length;s++)
        {
            bufor = figura[s];
            swipe(bufor,s);
            cout<<tab_licytacja[s]<<endl;
        }

       check_figure(tab_licytacja,length);
       cout<<tab_licytacja[6]<<"*"<<endl;

        if(p_licytacja[6] == tab_licytacja[6]);
        {
            for(int j;j<5;j++)
            {
                if(p_licytacja[j] < tab_licytacja[j])
                {
                    cout<<"Wprowadzono nizsza figure, sprobuj jeszcze raz"<<endl;
                    continue;
                }
                else
                {

                }
            }
        }
        }
        else if(p_licytacja[6] > tab_licytacja[6])
        {
            cout<<"Wprowadzono nizsza figure, sprobuj jeszcze raz*"<<endl;
            continue;
        }

    if(przebicie == 0)
        {
            end_game();
        }



        for(int i;i<length;i++)
        {
            p_licytacja[i] = tab_licytacja[i];
        }

            if(runda==ilosc_graczy)
            {
                runda = 1;
                continue;
            }

            runda++;
case 3:
            cout<<"Gracz 3 reka: ";
            for(int k=0;k<g3.ile_k;k++)
            {
               cout<<g3.reka[k]<<" ";
            }

    cout<<endl;

    cout<<"Przebijasz czy sprawdzasz?"<<endl;
    cin>>przebicie;

    if(przebicie == 1)
    {
        cout<<"Licytuj:  "<<endl;
        cin>>figura;
        length = figura.size();

        for(int s=0;s<length;s++)
        {
            bufor = figura[s];
            swipe(bufor,s);
            cout<<tab_licytacja[s]<<endl;
        }

       check_figure(tab_licytacja,length);

       cout<<tab_licytacja[6]<<"*"<<endl;

        /*if(p_licytacja[6] > tab_licytacja[6]);
        {
            for(int j;j<5;j++)
            {
                if(p_licytacja[j] < tab_licytacja[j])
                {
                    cout<<"Wprowadzono nizsza figure, sprobuj jeszcze raz"<<endl;
                    continue;
                }
                else
                {

                }
            }
        }
    }
        else
        {
            cout<<"Wprowadzono nizsza figure, sprobuj jeszcze raz"<<endl;
            continue;
        }

    if(przebicie == 0)
        {
            end_game();
        }*/



        for(int i;i<length;i++)
        {
            p_licytacja[i] = tab_licytacja[i];
        }

            if(runda==ilosc_graczy)
            {
                runda = 1;
                continue;
            }

            runda++;



    }
}
}
}

