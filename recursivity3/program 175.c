#include<stdio.h>
#include<conio.h>

void print(int x)
{
    if(x > 0)
    {
        printf("%i ",x);
        print(x-1);
    }
}

int main()
{
    print(5);
    getch();
    return 0;
}
