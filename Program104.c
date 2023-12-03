/*  User INPUT -> Accept no of rows & no of columns & print that * according to input

iRow = 4
iCol = 4
    
    1   2   3   4
    *   *   *   *
    1   2   3   4
    *   *   *   *   
    
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    { 
        for(j = 1; j <= iCol; j++)
        {
            if( (i % 2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
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