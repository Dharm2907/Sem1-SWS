#include <stdio.h>
#include <math.h>
int main()
{

    int n, x, count = 0, temp;
    double sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    x = n;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    n = x;

    while (n != 0)
    {
        temp = n % 10;

        sum += pow(temp, count);
        n = n / 10;
    }

    if (x == sum)
        printf("Given no. %d is an armstrong number\n", x);
    else
        printf("Given no. %d is not  an armstrong number\n", x);

    return 0;
}