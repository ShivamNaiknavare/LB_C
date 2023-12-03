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
    //Step1 : Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));     //Use of malloc

    //Step2 : Initialize the node
    newn -> data = No;
    newn -> next = NULL;

    //Step3 : Check whether LinkedList is empty or not
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)        //Defining Display Function
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head -> data);
        Head = Head -> next;
    }
    printf(" NULL \n");

}

int main()
{
    PNODE First = NULL;      //replacing typedef

    InsertFirst(&First,101);
    InsertFirst(&First,51);         //call by address of InsertFirst()
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);  //Display(100)           call display function as it is call by value 
    return 0;
}