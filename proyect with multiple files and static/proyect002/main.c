#include<stdio.h>
#include"products.h"

int main()
{
    tproduct products[AMOUNT];
    int option;
    do{
        printf("1-Product loading.\n");
        printf("2-Product list.\n");
        printf("3-End program.\n\n");
        printf("Chose your option: ");
        scanf("%i",&option);
        switch(option){
            case 1:load(products);
                    break;
            case 2:print(products);
                    break;
        }
    }while(option!=3);
    return 0;
}
