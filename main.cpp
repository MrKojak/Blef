#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool test( int trand_card, int ttab_deck[], int thow_many)
{
     if( thow_many <= 0 )
         return false;

    int i = 0;
    do
    {
        if( ttab_deck[ i ] == trand_card )
             return true;

        i++;
    } while( i < thow_many );

    return false;
}
int random()
{
    return( rand() % 24 ) + 1;
}

int main()
{
    srand(time(NULL));
    int tab_deck[24];
    int how_many = 0;
    int po_tasowaniu[24];

    do{
        int rand_card = random();
        if(test(rand_card,tab_deck,how_many) == false)
        {
            tab_deck[how_many] = rand_card;
            how_many++;
        }
    }while(how_many<24);

    how_many = 0;
    int i = 0;

    do{
        if(tab_deck[how_many]>=1 && tab_deck[how_many]<=4)
            po_tasowaniu[i] = 9;
        if(tab_deck[how_many]>=5 && tab_deck[how_many]<=8)
            po_tasowaniu[i] = 10;
        if(tab_deck[how_many]>=9 && tab_deck[how_many]<=12)
            po_tasowaniu[i] = 11;
        if(tab_deck[how_many]>=13 && tab_deck[how_many]<=16)
            po_tasowaniu[i] = 12;
        if(tab_deck[how_many]>=17 && tab_deck[how_many]<=20)
            po_tasowaniu[i] = 13;
        if(tab_deck[how_many]>=21 && tab_deck[how_many]<=24)
            po_tasowaniu[i] = 14;


    cout<<po_tasowaniu[i]<<endl;
    i++;
    how_many++;
    }while(how_many<24);
    return 0;
}
