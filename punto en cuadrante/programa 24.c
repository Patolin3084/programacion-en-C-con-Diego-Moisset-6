#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2;
    printf("Ingrese la coordenada X:");
    scanf("%i", &num1);
    printf("Ingrese la coordenada Y:");
    scanf("%i", &num2);
    if (num1>0 && num2>0)
    {
        printf("El punto se encuentra en el cuadrante 1");
    }
    else
    {
        if (num1<0 && num2>0)
        {
            printf("El punto se encuentra en el cuadrante 2");
        }
        else
        {
            if (num1<0 && num2<0)
            {
                printf("El punto se encuentra en el cuadrante 3");
            }
            else
            {
                if (num1>0 && num2<0)
                {
                    printf("El punto se encuentra en el cuadrante 4");
                }
                else
                {
                    printf("El punto esta sobre algun eje");
                }
            }
        }
    }
    getch();
    return 0;
}
