#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

struct node{
    int info;
    struct node *next;
};

struct node *root=NULL;
struct node *background=NULL;

int empty()
{
    if(root==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert(int x)
{
    struct node *nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->info=x;
    nuevo->next=NULL;
    if(empty())
    {
        root=nuevo;
        background=nuevo;
    }
    else
    {
        background->next=nuevo;
        background=nuevo;
    }
}

int extract()
{
    if(!empty())
    {
        int information=root->info;
        struct node *del=root;
        if(root==background)
        {
            root=NULL;
            background=NULL;
        }
        else
        {
            root=root->next;
        }
        free(del);
        return information;
    }
    else
    {
        return -1;
    }
}

void release()
{
    struct node *reco=root;
    struct node *del;
    while (reco!=NULL)
    {
        del=reco;
        reco=reco->next;
        free(del);
    }
}

int amount()
{
    struct node *reco=root;
    int amount=0;
    while(reco!=NULL)
    {
        amount++;
        reco=reco->next;
    }
    return amount;
}

void simulation()
{
    srand(time(NULL));
    int state=0;  //estado del cajero 0=desocupado  1=ocupado
    int arrival=rand()%2 + 2;
    int departure=-1;
    int quantityServer=0;
    for(int minute=0;minute<600;minute++)
    {
        if (arrival==minute)
        {
            if(state==0)
            {
                state=-1;
                departure=minute + 2 + rand()%3;
            }
            else
            {
                insert(minute);
            }
            arrival=minute + 2 + rand()%2;
        }
        if(departure==minute)
        {
            state=0;
            quantityServer++;
            if(!empty())
            {
                extract();
                state=1;
                departure=minute + 2 + rand()%3;
            }
        }
    }
    printf("Servers: %i\n",quantityServer);
    printf("In queue: %i\n",amount());
    printf("Arrival minute: %i",extract());
}

int main()
{
    simulation();
    release();
    getch();
    return 0;
}

