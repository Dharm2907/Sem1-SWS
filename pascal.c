#include <stdio.h>
int main()
{

    int row, coef = 1;
    printf("\nEnter the no. of rows : ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {

            if (i == 0 || j == 0)
            {
                coef = 1;
            }
            else
            {

                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }

    return 0;
}