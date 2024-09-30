#include<stdio.h>
#include<conio.h>

enum operations {SUMA,RESTA,MULT,DIV};

int operate(int num1,int num2,enum operations op)
{
    switch(op) {
        case SUMA:return num1+num2;
        case RESTA:return num1-num2;
        case MULT:return num1*num2;
        case DIV:return num1/num2;
        default:printf("The program stopped due to an invalid operation");
                exit(1);
    }
}
int main()
{
    int value1=10;
    int value2=5;
    printf("The addition of %i and %i is %i\n",value1,value2,operate(value1,value2,SUMA));
    printf("The sustraction of %i and %i is %i\n",value1,value2,operate(value1,value2,RESTA));
    printf("The multiplication of %i and %i is %i\n",value1,value2,operate(value1,value2,MULT));
    printf("The division of %i and %i is %i\n",value1,value2,operate(value1,value2,DIV));
    getch();
    return 0;
}
