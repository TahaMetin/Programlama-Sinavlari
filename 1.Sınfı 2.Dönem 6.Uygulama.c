#include <stdio.h>
#include <stdlib.h>

int kisiSayisi;

struct Kimlik
{
    char isim[30];
    int gun;
    int ay;
    int yil;
};
int kucuguBul(struct Kimlik kisi[])
{
    int kucukOlaninIndexi=0;
    for(int i=0; i<kisiSayisi; i++)
    {
        if(kisi[i].yil>kisi[kucukOlaninIndexi].yil)
            kucukOlaninIndexi=i;
        else if(kisi[i].yil==kisi[kucukOlaninIndexi].yil)
        {
            if(kisi[i].ay>kisi[kucukOlaninIndexi].ay)
                kucukOlaninIndexi=i;
            else if(kisi[i].ay==kisi[kucukOlaninIndexi].ay)
                if(kisi[i].gun>kisi[kucukOlaninIndexi].gun)
                    kucukOlaninIndexi=i;
        }
    }
    return kucukOlaninIndexi;
}

int main()
{
    int enKucuk;
    int i;


    printf("Kisi sayisini giriniz:");
    scanf("%d",&kisiSayisi);

    struct Kimlik kisi[kisiSayisi];

    for(i =0; i<kisiSayisi; i++)
    {
        printf("%d. kisinin ismini giriniz:",i+1);
        scanf("%s",&kisi[i].isim);

        printf("%d. kisinin dogum tarihini giriniz:\n",i+1);
        printf("gun:");
        scanf("%d",&kisi[i].gun);


        printf("ay:");
        scanf("%d",&kisi[i].ay);


        printf("yil:");
        scanf("%d",&kisi[i].yil);
        printf("\n");
    }

    enKucuk=kucuguBul(kisi);
    printf("Kisi Bilgileri\n");
    printf("--------------------------\n");

    for(i=0; i<kisiSayisi; i++)
    {
        printf("%s - %d / %d / %d\n",kisi[i].isim,kisi[i].gun,kisi[i].ay,kisi[i].yil);
    }

    printf("--------------------------\n\n");
    printf("En Kucuk Kisinin ismi: %s\n\n",kisi[enKucuk].isim);
    printf("En Kucuk Kisinin Dogum Tarihi: %d / %d / %d\n",kisi[enKucuk].gun,kisi[enKucuk].ay,kisi[enKucuk].yil);

    return 0;
}
