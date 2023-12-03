//Problem Statement : Accept radius from user and calculate area of circle 

// Step 1 : Understand the problem statement 
// Conclusion : We are going to use the formula as PI*R*R

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

#define PI 3.14             //**defining #pragma pack

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :      CalculateArea
// Description :        It is used to calculate Area of Circle
// Input Arguments :    float
// Output :             float
// Author :             Shivam Vitthal Naiknavare
// Date :               02/10/2023  
//
//////////////////////////////////////////////////////////////////////////////////////////////////

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;

    fAns = PI * fValue * fValue;
    return fAns;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of an application 
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto float fRadius = 0.0f;
    auto float  fArea = 0.0f;

    printf("Enter the radius : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of Circle is %f ",fArea);

    return 0;
}