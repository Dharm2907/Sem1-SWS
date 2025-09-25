#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter rows of pattern :");
    scanf("%d", &n);

    int odd = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d", i);
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 1)
                {
                    printf("%d", odd);
                    odd += 2;
                }
                else
                {
                    printf("*");
                }
            }
            odd = 1;
        }
        putchar('\n');
    }

    return 0;
}
