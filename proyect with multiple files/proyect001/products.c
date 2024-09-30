#include<stdio.h>
#include"products.h"

void load(tproduct products[AMOUNT])
{
    int r;
    for(r=0;r<AMOUNT;r++)
    {
        printf("Enter the code:");
        scanf("%i",&products[r].code);
        fflush(stdin);
        printf("Enter the description:");
        gets(products[r].description);
        printf("Enter the price:");
        scanf("%f",&products[r].price);
    }
}

void print(tproduct products[AMOUNT])
{
    int r;
    for(r=0;r<AMOUNT;r++)
    {
        printf("Code:%i\n",products[r].code);
        printf("Description:%s\n",products[r].description);
        printf("Price:%0.2f\n",products[r].price);
    }
    printf("\n\n");
}
