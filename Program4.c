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
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = iValue1 + iValue2;

    printf("Addition is : %d\n",iAns);


    return 0;
}

// Step 5 : Test the code
/*
Test Case 1:
Input : 10  11
Output : 21

Test Case 2:
Input : 10  0
Output : 10

Test Case 3:
Input : 12  -6
Output : 6

Test Case 4:
Input : -6  -5
Output : -11
*/