#include <stdio.h>
int main()
{

    int i, n;
    printf("Enter the no. of rows\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}