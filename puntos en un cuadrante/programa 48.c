#include<stdio.h>
#include<conio.h>

int main()
{
    int f,n,valorX,valorY,cuad1,cuad2,cuad3,cuad4;
    cuad1=0;
    cuad2=0;
    cuad3=0;
    cuad4=0;
    printf("Ingrese la cantidad de puntos a ubicar: ");
    scanf("%i",&n);
    for(f=1;f<=n;f++)
    {
        printf("Ingrese la coordenada X del punto: ");
        scanf("%i",&valorX);
        printf("Ingrese la coordenada Y del punto: ");
        scanf("%i",&valorY);
        printf("\n");
        if(valorX>0 && valorY>0)
        {
            cuad1++;
        }
        else
        {
            if(valorX<0 && valorY>0)
            {
                cuad2++;
            }
            else
            {
                if(valorX<0 && valorY<0)
                {
                cuad3++;
                }
                else
                {
                    if(valorX>0 && valorY<0)
                    {
                        cuad4++;
                    }
                    else
                    {
                        printf("Algun punto esta sobre algun eje.");
                        printf("\n");
                    }


               }
           }
        }
    }
    printf("Cantidad de puntos en el cuadrante 1: ");
    printf("%i",cuad1);
    printf("\n");
    printf("Cantidad de puntos en el cuadrante 2: ");
    printf("%i",cuad2);
    printf("\n");
    printf("Cantidad de puntos en el cuadrante 3: ");
    printf("%i",cuad3);
    printf("\n");
    printf("Cantidad de puntos en el cuadrante 4: ");
    printf("%i",cuad4);
    getch();
    return 0;
}
