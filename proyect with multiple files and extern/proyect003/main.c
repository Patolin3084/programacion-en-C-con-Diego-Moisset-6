#include<stdio.h>
#include<conio.h>
#include"pila.h"

tnode root=NULL;

int main()
{
    insertar(10);
    insertar(40);
    insertar(3);
    print();
    printf("Extract from pila: %i\n",extract());
    print();
    release();
    getch();
    return 0;
}
