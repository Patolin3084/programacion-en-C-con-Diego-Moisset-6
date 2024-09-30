#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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

void print()
{
    struct node *reco=root;
    printf("Full listing queue type list\n");
    while(reco!=NULL)
    {
        printf(" %i ",reco->info);
        reco=reco->next;
    }
    printf("\n");
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

int main()
{
    insert(5);
    insert(10);
    insert(50);
    print();
    printf("Extract one of the queue: %i\n",extract());
    print();
    release();
    getch();
    return 0;
}
