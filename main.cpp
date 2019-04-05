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

    do{
        int rand_card = random();
        if(test(rand_card,tab_deck,how_many) == false)
        {
            tab_deck[how_many] = rand_card;
            how_many++;
        }
    }while(how_many<24);

    how_many = 0;

    do{
    cout<<tab_deck[how_many]<<endl;
    how_many++;
    }while(how_many<24);
    return 0;
}
