#include <stdio.h>
int main()
{

    int n, i, j;
    char c;
    printf("Enter the no. of rows: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            c = '#';
        }
        else
        {
            c = '$';
        }

        for (int j = n; j >= i; j--)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}