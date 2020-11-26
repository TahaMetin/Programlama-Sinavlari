#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int oranlar[30];
    int siraNo[30];
    char cumle[10000];
    char ulkeler[30][30];
    char b[100];
    for(int i=0; i<30; i++)
    {
        siraNo[i] = i;
    }
    int y = 0,z = 0;
    printf("Ulke isimlerini ve oranlarini giriniz:");
    gets(cumle);
    strcpy(b," ");
    printf("%s",b);
    int x = 0;
    for (int i=0; i<strlen(cumle) ; i++)
    {
        if (isdigit(cumle[i]))
        {
            oranlar[z++] = ((cumle[i] - '0') * 10) + (cumle[i+1] - '0');
            strncpy(ulkeler[y++],cumle+x,i-x);
            x = i+2;
            i++;
        }
    }
    int temp;
    int tutucu[z];
    for (int i=0; i<z; i++)
    {
        tutucu[i] = oranlar[i];
    }
    for (int i=0; i<z; i++)
    {
        for (int j=0; j<z-1; j++)
        {
            if (tutucu[j] < tutucu[j+1])
            {
                temp = tutucu[j];
                tutucu[j] = tutucu[j+1];
                tutucu[j+1] = temp;
                temp = siraNo[j];
                siraNo[j] = siraNo[j+1];
                siraNo[j+1] = temp;
            }
        }
    }
    for (int i=0; i<z-1 ; i++)
    {
        if (oranlar[siraNo[i]] == oranlar[siraNo[i+1]])
        {
            if (ulkeler[siraNo[i]][0] > ulkeler[siraNo[i+1]][0])
            {
                int temp = siraNo[i];
                siraNo[i] = siraNo[i+1];
                siraNo[i+1] = temp;
            }
        }
    }
    printf("\nUlke siralamasi ve oranlar:\n\n");
    for (int i=0; i<z; i++)
    {
        printf("%s %d\n",ulkeler[siraNo[i]],oranlar[siraNo[i]]);
    }
    return 0;
}


