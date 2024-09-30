#include<stdio.h>
#include<conio.h>

void print(int x)
{
    printf("%i ",x);
    print(x -1);
}

int main()
{
    print(5);
    getch();
    return 0;
}
