#include <stdio.h>
int main()
{

    int n, i, j;
    printf("\n enter the no. of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" @");
        }
        printf("\n");
    }

    return 0;
}