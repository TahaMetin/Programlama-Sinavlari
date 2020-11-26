#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "quiz8.txt"

int c;
int main()
{
    FILE* file = fopen(FILE_PATH,"w+");
    char *sayilar[10];
    int sayi;

    sayilar[0] = "sifir";
    sayilar[1] = "bir";
    sayilar[2] = "iki";
    sayilar[3] = "uc";
    sayilar[4] = "dort";
    sayilar[5] = "bes";
    sayilar[6] = "alti";
    sayilar[7] = "yedi";
    sayilar[8] = "sekiz";
    sayilar[9] = "dokuz";

    printf("Sayi Giriniz: ");
    scanf("%d",&sayi);
    sayi = cevir(sayi);
    if (sayi == 0){
        fprintf(file,"%s ",sayilar[0]);
        printf("%s ",sayilar[0]);
    }
    while (sayi > 0){
        c = sayi%10;
        sayi /= 10;
        fprintf(file,"%s ",sayilar[c]);
        printf("%s ",sayilar[c]);
        }
    printf("\nDosya kaydedilmistir.\n");
    fclose(file);
    return 0;
}

int cevir(int a){
    c = 0;
    while (a > 0){
        c += a%10;
	a = a/10;
        c *= 10;
    }
    c = c/10;
    return c;
}
