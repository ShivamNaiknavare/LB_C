#include<stdio.h>
#include<stdlib.h>
// it is program167.c --  without typedef i.e no use of typedef
//Structure Declaration
struct node
{
    int data;           //4 Bytes
    struct node *next;  //8 Bytes
};

typedef struct node NODE;   
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(struct node ** Head, int No)      
{
    struct node * newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));     

    newn -> data = No;
    newn -> next = NULL;
}

int main()
{
    PNODE First = NULL;      

    InsertFirst(&First,51);       
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}