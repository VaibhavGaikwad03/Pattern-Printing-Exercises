/*
Accept the number from the user and display below pattern

*   *   *   *   *   *
*               *   *
*           *       *
*       *           *
*   *               *
*   *   *   *   *   *

*/

#include<stdio.h>

void PatternPrint(int iValue)
{
    int i = 0, j = 0;

    for(i = 1; i <= iValue; i++)
    {
        for(j = iValue-1; j >= 0; j--)
        {
            if((i-1 == j) || (i == 1) || (i == iValue) || (j == iValue-1) || (j == 0))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
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