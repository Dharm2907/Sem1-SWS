#include <stdio.h>
int main()
{

    int num, temp;

    printf("Enter no .of rows\n");
    scanf("%d", &num);
    temp = num;

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 2 * temp - 2; j >= 1; j--)
        {
            printf(" ");
            // temp--;
        }
        temp--;
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    temp = 1;
    for (int i = num - 1; i >= 1; i--)
    {

        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        for (int j = 0; j <= temp; j++)
        {
            printf(" ");
            // temp--;
        }
        temp += 2;
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}