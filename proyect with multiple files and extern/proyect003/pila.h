struct node{
    int info;
    struct node *next;
};

typedef struct node * tnode;

void insertar(int x);
void print();
int extract();
void release();
