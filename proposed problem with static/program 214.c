#include<stdio.h>
#include<conio.h>

int proximoMultiplo2()
{
    static int mult2;
    mult2+=2;
    return mult2;
}

int main()
{
    for(int r=0;r<10;r++)
        printf("%i  ",proximoMultiplo2());
    getch();
    return 0;
}
