#include <stdio.h>
#include <stdlib.h>

void hesapla (int toplam, int *yil, int *ay, int *gun)
{
    *yil=toplam/365;
    *ay=(toplam%365)/30;
    *gun=(toplam%365)%30;
}
int main()
{
    int toplam,yil,ay,gun;
while(1){
    printf("\nIsin bitme suresinin kac gun oldugunu belirtiniz:");
    scanf("%d",&toplam);
    hesapla(toplam,&yil, &ay,&gun);
    if(yil>0)
        printf("\n%d yil",yil);
    if(ay>0)
        printf(" %d ay",ay);
    if(gun>0)
        printf(" %d gun",gun);
    if(toplam>0)
        printf(" surer.");
    else
        printf("0 haricinde bir sayi giriniz.");}

    return 0;
}
