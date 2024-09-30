#include<stdio.h>
#include<conio.h>

#define CANT 5

void load(int vec[CANT])
{
    for(int r=0;r<CANT;r++)
    {
        printf("Enter a element:");
        scanf("%i",&vec[r]);
    }
}

void list(int vec[CANT])
{
    for(int r=0;r<CANT;r++)
    {
        printf("%i ",vec[r]);
    }
    printf("\n\n");
}

void highest(int vec[CANT])
{
    int high=vec[0];
    for(int r=1;r<CANT;r++)
    {
        if(vec[r]>high)
            high=vec[r];
    }
    printf("The highest element in the list is: %i\n\n",high);
}

void lowest(int vec[CANT])
{
    int low=vec[0];
    for(int r=1;r<CANT;r++)
    {
        if(vec[r]<low)
            low=vec[r];
    }
    printf("The lowest element in the list is: %i\n\n",low);
}

int main()
{
    int vec[CANT];
    int option;
    do{
        printf("1 - Load the vector\n");
        printf("2 - Print the vector\n");
        printf("3 - Print the highest element in the vector\n");
        printf("4 - Print the lowest elemet in the vector\n");
        printf("5 - Exit\n");
        printf("Enter an option: ");
        scanf("%i",&option);
        switch(option)
        {
            case 1:load(vec);
                break;
            case 2:list(vec);
                break;
            case 3:highest(vec);
                break;
            case 4:lowest(vec);
                break;
        }
    }while(option!=5);
    getch();
    return 0;
}
