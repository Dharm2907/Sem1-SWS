#include <stdio.h>
int main()
{

    int digit = 1, n;
    printf("Enter no. : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {

            if (i == 0 || j == 0)
            {
                digit = 1;
            }
            else
            {
                digit = digit * (i - j + 1) / j;
            }
            printf("%4d", digit);
        }
        putchar('\n');
    }

    return 0;
}