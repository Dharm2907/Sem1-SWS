#include <stdio.h>
int main()
{

    int n, prime = 1;
    printf("Enter the upper limit to find prime number: ");
    scanf("%d", &n);

    printf("\nPrime no. between 1 to %d are \n\n", n);

    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d  ", i);
        }
        else
        {
            prime = 1;
        }
    }

    return 0;
}