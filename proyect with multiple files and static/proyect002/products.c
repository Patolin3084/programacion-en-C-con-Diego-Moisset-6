#include<stdio.h>
#include"products.h"

static void showTitle(char *tit)
{
    printf("%s\n",tit);
}

static void showAsteriks()
{
    printf("***************************************\n\n");
}

void load(tproduct products[AMOUNT])
{
    int r;
    showTitle("Product data upload");
    for(r=0;r<AMOUNT;r++)
    {
        printf("Load the code: ");
        scanf("%i",&products[r].code);
        fflush(stdin);
        printf("Load the description: ");
        gets(products[r].description);
        printf("Load the price: ");
        scanf("%f",&products[r].price);
    }
    showAsteriks();
}

void print(tproduct products[AMOUNT])
{
    int r;
    showTitle("Products list");
    for(r=0;r<AMOUNT;r++)
    {
        printf("Code: %i\n",products[r].code);
        printf("Description: %s\n",products[r].description);
        printf("Price: %0.2f\n",products[r].price);
    }
    showAsteriks();
}
