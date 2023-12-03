//Problem Statement : Program to write Cube

// Step 1 : Understand the problem statement 

// Step 2 : Algorithm  
/*
    START
        Accept radius from user and store into RADIUS 
        Create variable as PI and store value as 3.14
        Calculate area PI * RADIUS * RADIUS 
        Display VAlue to the user
    STOP    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :      CalculateArea
// Description :        It is used to calculate cube
// Input Arguments :    float
// Output :             float
// Author :             Shivam Vitthal Naiknavare
// Date :               02/10/2023  
//
//////////////////////////////////////////////////////////////////////////////////////////////////

long int CalculateCube(int iValue)          //** Using long int datatype
{
    long int iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of an application 
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is %ld \n",iAns);

    return 0;
}