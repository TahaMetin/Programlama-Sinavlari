#include <stdio.h>
#include <stdlib.h>

//  Girilen 2 sayının toplamını ekrana bastıran bir program yazınız.

int main()
{
    int sayi1,sayi2,sayi3;
    printf("1. sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%d",&sayi2);
    sayi3=sayi1+sayi2;
    printf("%d",sayi3);

    return 0;
}  
