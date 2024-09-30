#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo2.dat","wb");
    if(arch==NULL)
        exit(1);
    int valor1,valor2;
    printf("Enter the first integer value: ");
    scanf("%i",&valor1);
    fwrite(&valor1,sizeof(int),1,arch);
    printf("Enter the second integer value: ");
    scanf("%i",&valor2);
    fwrite(&valor2,sizeof(int),1,arch);
    float valor3,valor4;
    printf("Enter the first float value: ");
    scanf("%f",&valor3);
    fwrite(&valor3,sizeof(float),1,arch);
    printf("Enter the second float value: ");
    scanf("%f",&valor4);
    fwrite(&valor4,sizeof(float),1,arch);
    fclose(arch);
    printf("A binary file was created that stores two int and two float.");
    getch();
    return 0;
}
