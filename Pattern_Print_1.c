/*
Accept the number from the user and print below pattern
*
*   *
*   *   *
*   *   *   *

*/

#include<stdio.h>

void PatternPrint(int iValue)
{
    int i = 0, j = 0;

    for(i = 0; i < iValue; i++)
    {
        for(j = 0; j <= i; j++) 
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    PatternPrint(iNo);

    return 0;
}