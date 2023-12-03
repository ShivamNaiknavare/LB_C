//Problem Statement : Accept 2 values from user and perform the Addition.

//Step 1: Understand the problem statement  
//Conclusion : we have to accept 2 integers and perform its addition.

//Step 2: Write the algorithm
/*
    START
        Accept first number from user and store it into No1
        Accept second number from user and store it into No2
        Create one variable to store the result named as Ans
        Perform Addition of No1 & No2, store the result in Ans
        Display the result from Ans to the User
    STOP    
*/

// Step 3 : Decide the programming language(C/C++/Java)
// We select C programming

//Step 4 : Write the Program using C


#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter second number : \n");
    scanf("%d",&j);

    k = i+j;

    printf("Addition is : %d\n",k);


    return 0;
}