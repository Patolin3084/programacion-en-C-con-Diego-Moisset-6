#include<stdio.h>
#include<conio.h>

#define ROW 3
#define COLUMN 10

void load(int mat[ROW][COLUMN])
{
    for(int r=0;r<ROW;r++)
    {
        for(int c=0;c<COLUMN;c++)
        {
            mat[r][c]=rand()%10+1;
        }
    }
}

void search(int mat[ROW][COLUMN])
{
    int search;
    printf("Search the number:");
    scanf("%i",&search);
    for(int r=0;r<ROW;r++)
    {
        for(int c=0;c<COLUMN;c++)
        {
            if(mat[r][c]==search)
            {
                goto found;
            }
        }
    }
    printf("The number %i has NOT been in the matrix.",search);
    return;
    found:printf("The number %i has been found in the matrix.",search);
}

void print(int mat[ROW][COLUMN])
{
    for(int r=0;r<ROW;r++)
    {
        for (int c=0;c<COLUMN;c++)
        {
            printf("%3i",mat[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[3][10]={{0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0}};
    load(mat);
    print(mat);
    search(mat);
    getch();
    return 0;
}
