/*
Accept the number from the user and display below pattern

1   2   3   4   5
1   2           5
1       3       5
1           4   5
1   2   3   4   5

*/

#include<stdio.h>

void PatternPrint(int iValue)
{
    int i = 0, j = 0;

    for(i = 1; i <= iValue; i++)
    {
        for(j = 1; j <= iValue; j++)
        {
            if((i == 1) || (i == iValue) || (j == 1) || (j == iValue) || (i == j))
            {
                printf("%d\t",j);
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