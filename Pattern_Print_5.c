/*
Accept the rows and columns from the user and display below pattern

1   2   3   4
    1   2   3
        1   2
            1

*/

#include<stdio.h>

void PatternPrint(int iRow, int iCol)
{
    int i = 0, j = 0, Pattern = 0;

    for(i = 1; i <= iRow; i++)
    {
        Pattern = 0;

        for(j = 1; j <= iCol; j++)
        {
            if(i <= j)
            {   Pattern++;
                printf("%d\t",Pattern);
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
    int iNo1 = 0, iNo2 = 0; 

    printf("Enter the number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iNo2);

    PatternPrint(iNo1, iNo2);

    return 0;
}