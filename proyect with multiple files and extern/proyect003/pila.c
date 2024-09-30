#include<stdio.h>
#include<stdlib.h>
#include"pila.h"

extern tnode root;

void insertar(int x)
{
    tnode nuevo;
    nuevo = malloc(sizeof(struct node));
    nuevo->info = x;
    if (root == NULL)
    {
        root = nuevo;
        nuevo->next = NULL;
    }
    else
    {
        nuevo->next = root;
        root = nuevo;
    }
}

void print()
{
    tnode reco=root;
    printf("Lista completa.\n");
    while (reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->next;
    }
    printf("\n");
}

int extract()
{
    if (root != NULL)
    {
        int informacion = root->info;
        struct nodo *bor = root;
        root = root->next;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
}

void release()
{
    tnode reco = root;
    tnode bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->next;
        free(bor);
    }
}
