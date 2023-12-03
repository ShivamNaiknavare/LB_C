#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
    int data;           //4 Bytes
    struct node *next;  //8 Bytes       It is a pointer which is pointing to same structure
};

int main()
{
    struct node *First = NULL;

    return 0;
}