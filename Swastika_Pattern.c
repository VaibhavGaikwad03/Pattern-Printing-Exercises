#include <stdio.h>

void swastika_pattern(int num)
{
    if (num % 2 == 0)
    {
        printf("Enter odd numbers only.\n");
        return;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((j == 0 && i <= num / 2 || j == num / 2) || (i == 0 && j >= num / 2) || (i == num / 2) || (i == num - 1 && j <= num / 2) || (j == num - 1 && i >= num / 2))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    swastika_pattern(num);

    return 0;
}
