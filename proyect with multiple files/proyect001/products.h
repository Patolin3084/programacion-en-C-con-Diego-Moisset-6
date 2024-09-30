typedef struct {
    int code;
    char description[41];
    float price;
} tproduct;

#define AMOUNT 4

void load(tproduct products[AMOUNT]);
void print(tproduct products[AMOUNT]);

