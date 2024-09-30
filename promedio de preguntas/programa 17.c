#include<stdio.h>
#include<conio.h>

int main()
{
    int preguntas, correctas, porcentaje;
    printf("Ingrese cantidad de preguntas formuladas:");
    scanf("%i", &preguntas);
    printf("Ingrese cantidad de preguntas correctas:");
    scanf("%i", &correctas);
    porcentaje=(correctas*100)/preguntas;
    if(porcentaje>=90)
    {
        printf("Nivel Maximo");
    }
    else
    {
        if(porcentaje>=75)
        {
            printf("Nivel Medio");
        }
        else
        {
            if(porcentaje>=50)
            {
                printf("Nivel Regular");
            }
            else
            {
                printf("Fuera de Nivel");
            }
        }
    }
    getch();
    return 0;
}
