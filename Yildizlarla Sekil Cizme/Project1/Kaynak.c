#include<stdio.h>
#include<stdlib.h>

int main() {

    int i, j, sayi;
    
    printf("Tekrar Sayisi Girin: ");
    scanf_s("%d", &sayi);

    /*Duz Ucgen*/
    
    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\n");

    /*Ters Ucgen*/

    for (i = sayi; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    }