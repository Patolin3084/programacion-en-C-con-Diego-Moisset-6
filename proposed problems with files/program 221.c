#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo2.dat","rb");
    if(arch==NULL)
        exit(1);
    int v1,v2;
    fread(&v1,sizeof(int),1,arch);
    printf("First integer: %i\n",v1);
    fread(&v2,sizeof(int),1,arch);
    printf("Second integer: %i\n",v2);
    float v3,v4;
    fread(&v3,sizeof(float),1,arch);
    printf("First float: %0.2f\n",v3);
    fread(&v4,sizeof(float),1,arch);
    printf("Second float: %0.2f",v4);
    fclose(arch);
    getch();
    return 0;
}
