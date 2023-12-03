#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
    int data;           //4 Bytes
    struct node *next;  //8 Bytes
};

typedef struct node NODE;   //typdef declaraing
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    struct node *First = NULL;


    return 0;
}