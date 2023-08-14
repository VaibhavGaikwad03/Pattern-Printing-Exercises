#include <stdio.h>

void display(int no)
{
    for (int i = 0; i < no; i++)
    {
        for (int j = 0; j < no; j++)
        {
            if ((j == 0 && i <= no / 2 || j == no / 2) || (i == 0 && j >= no / 2) || (i == no / 2) || (i == no - 1 && j <= no / 2) || (j == no - 1 && i >= no / 2))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int no = 9;

    display(no);

    return 0;
}
