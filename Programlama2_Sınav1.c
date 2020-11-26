//Question:
//Make a program in C language for create a random matrix and find out its nilpotent matrix or not.

//Answer:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int boyut;
int NilpotentMi(int *matris)
{
    int kontrol=0;
    int matris2[boyut][boyut];
    int matris3[boyut][boyut];

    for (int i=0; i<boyut; i++)
    {
        for (int j=0; j<boyut ; j++)
        {
            matris2[i][j] = *matris;
            matris++;
        }
    }

    for (int i=0; i<boyut ; i++)
    {
        for (int j=0; j<boyut; j++)
        {
            matris3[i][j]=matris2[i][j]*matris2[j][i];
        }
    }

    for (int i=0; i<boyut; i++)
    {
        for (int j=0; j<boyut ; j++)
        {
            int deger = 0;
            for (int s=0; s<boyut ; s++)
            {
                deger += matris2[s][j] * matris2[i][s];
            }
            matris3[i][j] = deger;

            if(matris3[i][j]!=0)
            {
                kontrol++;
            }
        }
    }
    printf("\n");
    for(int i=0; i<boyut; i++)
        /*   {
               for(int j=0; j<boyut; j++)
                   printf(" %d ",matris3[i][j]);
               printf("\n");
           }
        printf("\n");*/
    if(kontrol==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int i,j=0;

    printf("matrisin boyutunu giriniz!\n");
    scanf("%d",&boyut);

    srand(time(NULL));

    int matris[boyut][boyut];
    for( i=0; i<boyut; i++)
    {
        for(j=0; j<boyut; j++)
        {
            matris[i][j]=rand()%21-10;

        }
    }
    printf("\n");
    for(int i=0; i<boyut; i++)
    {

        for(int j=0; j<boyut; j++)
            printf(" %d ",matris[i][j]);
        printf("\n");
    }
    if(NilpotentMi(*matris))
    {
        printf("matris nilpotent Dir");
    }
    else
    {
        printf("matris nilpotent DEGILDIR\n");
    }


    return 0;
}

