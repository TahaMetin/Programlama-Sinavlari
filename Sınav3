#include <stdio.h>
#include <stdlib.h>

// 4 işlemli (toplama,çıkarma,bölme,çarpma) hesap makinesi yapınız.

int main()
{
    float sayi1,sayi2,sonuc;
    char islem;
    printf("HESAP MAKINESİ\n-----------------------\nEnter [Sayi 1] Islem [+,-,*,/] [Sayi 2]\n");
    scanf("%f %c %f",&sayi1,&islem,&sayi2);
    switch (islem)
    {
    case '+':
        sonuc=sayi1+sayi2;
        break;
    case '-':
        sonuc=sayi1-sayi2;
        break;
    case '*':
        sonuc=sayi1*sayi2;
        break;
    case '/':
        sonuc=sayi1/sayi2;
        break;

    }
    if(sayi2==0)
        printf("Bolme isleminde, bir sayinin 0'a a bolumu tanimsizdir.");
    else
        printf("%f %c %f = %f",sayi1,islem,sayi2,sonuc);
    return 0;
}

