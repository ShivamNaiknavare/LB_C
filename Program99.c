/*  User INPUT -> Accept no of rows & no of columns & print that 1 according to input

iRow = 3
iCol = 4
    1   1   1   1
    1   1   1   1
    1   1   1   1
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    { 
        for(j = 1; j <= iCol; j++)
        {
            printf("1\t");
        }
        printf("\n\n");
    } 

}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter no of rows : ");
    scanf("%d",&iNo1);

    printf("Enter no of columns : ");
    scanf("%d",&iNo2);

    Display(iNo1, iNo2);

   return 0;
}