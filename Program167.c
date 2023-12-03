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

void InsertFirst(PPNODE Head, int No)      //Use of InsertFirst() Function
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));     //Use of malloc

    newn -> data = No;
    newn -> next = NULL;
}

int main()
{
    PNODE First = NULL;      //replacing typedef

    InsertFirst(&First,51);         //call by address of InsertFirst()
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}