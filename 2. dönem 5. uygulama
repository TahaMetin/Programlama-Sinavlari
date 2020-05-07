#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

AsalMi(int sayi)
{
    int c;

    for (c = 2; c <= sayi - 1; c++)
    {
        if (sayi%c == 0)
            return 0;
    }
    if (c == sayi)
        return 1;
}

int main()
{
    int i;
    float j;
    char dizi[4801];
    for (i = 1 ; i < 101 ; i++)
    {
        if(i!=1 && AsalMi(i))     //Asal sayýlar için; | sayýnýn karesi alýnýr |>>|sayýnýn karesi alýnýr|
            sprintf(dizi+strlen(dizi),"| %3d(asal)| ...^^... |%5d|..>>..|%10.4f|\n",i,i*i,(float)i*(float)i);

        else if(i%2==0)           //Çift sayýlar için; | sayýnýn iki katý alýnýr |>>|sayýnýn iki katý alýnýr|
            sprintf(dizi+strlen(dizi),"| %3d(cift)| ...><... |%5d|..>>..|%10.3f|\n",i,i*2,(float)i*2);

        else if(i%2==1)           //Tek sayýlar için; | sayýnýn yarýsý alýnýr |>>|sayýnýn yarýsý alýnýr|
            sprintf(dizi+strlen(dizi),"| %3d(tek )| ...//... |%5d|..>>..|%10.2f|\n",i,i/2,(float)i/2);
    }
    puts(dizi);
    //printf("%d",strlen(dizi));  --> 4800
    return 0;
}
