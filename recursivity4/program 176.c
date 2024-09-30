#include<stdio.h>
#include<conio.h>

void print(int x)
{
    if(x > 0)
    {
        print(x-1);
        printf("%i ",x);
    }
}

int main()
{
    print(5);
    getch();
    return 0;
}
