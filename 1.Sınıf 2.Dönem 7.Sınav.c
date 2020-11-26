

#include <stdio.h>
#include <stdlib.h>
int kisiSayisi=0;
struct Kimlik
{
    char isim[20];
    int yas;

};
int main()
{
    printf("kisi sayisini giriniz:");
    scanf("%d",&kisiSayisi);
    struct Kimlik *kisi = (struct Kimlik*) malloc(kisiSayisi*sizeof(struct Kimlik));
    for(int i=0; i<kisiSayisi; i++)
    {
        printf("%d. kisinin ismini giriniz:",i+1);
        scanf("%s",kisi[i].isim);
        printf("%d. kisinin yasini giriniz:",i+1);
        scanf("%d",&kisi[i].yas);

    }
     int yazildiMi[kisiSayisi];
     int i;
    for(i=0; i<kisiSayisi; i++)
    {
        yazildiMi[i]=0;
    }
    printf("\nAda gore fihrist siralamasi:\n");
    char enKucuk[100];
    int enKucukOlan,j;
    for(i=0; i<kisiSayisi; i++)
    {
        strcpy(enKucuk,"\n\n");
        for(j=0; j<kisiSayisi; j++)
        {
            if(yazildiMi[j]==0)
            {
                if(!strcmp(enKucuk,"\n\n")){
                    strcpy(enKucuk,kisi[j].isim);
                    enKucukOlan=j;
                }
                else{
                    if(strcmp(kisi[j].isim,enKucuk)<0){
                        strcpy(enKucuk,kisi[j].isim);
                    enKucukOlan=j;
                    }
                }
            }
        }
        printf("%s %d\n",enKucuk,kisi[enKucukOlan].yas);
        yazildiMi[enKucukOlan]=1;
    }
    int enBuyukYas;
    for(i=0; i<kisiSayisi; i++)
    {
        yazildiMi[i]=0;
    }
    printf("\nYasa gore buyukten kucuge siralamasi:\n");
    for(i=0; i<kisiSayisi; i++)
    {
        enBuyukYas=-1;
        for(j=0; j<kisiSayisi; j++)
        {
            if(yazildiMi[j]==0)
            {
                if(enBuyukYas==-1){
                    enBuyukYas=kisi[j].yas;
                    enKucukOlan=j;
                }
                else{
                    if(enBuyukYas<kisi[j].yas){
                        enBuyukYas=kisi[j].yas;
                    enKucukOlan=j;
                    }
                }
            }
        }
        printf("%s %d\n",kisi[enKucukOlan].isim,kisi[enKucukOlan].yas);
        yazildiMi[enKucukOlan]=1;
    }
    return 0;
}
