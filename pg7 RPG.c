#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int intelligence = (rand() % 21);
    printf("intelligence %d  ", intelligence);
    int stamina = (rand() % (21 - intelligence));
    printf("stamina %d  ", stamina);
    int charisma = (20 - stamina - intelligence);
    printf("charisma %d  ", charisma);
    
    if(intelligence >= stamina&&intelligence >= charisma)
    {
        printf("mage");
    }
    if(stamina >= intelligence&&stamina >= charisma)
    {
        printf("knight");
    }
    if(charisma >= intelligence&&charisma >= stamina)
    {
        printf("thief");
    }
    if(intelligence == 20)
    {
        printf("<<Wise man>>");
    }
    if(stamina == 20)
    {
        printf("<<very good!!!!>>");
    }
    if(charisma == 20)
    {
        printf("<<President>>");
    }
    return 0;
}