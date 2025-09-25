#include <stdio.h>
int main()
{

    int arr[3][3], sumr[3] = {0, 0, 0}, sumc[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the element at index [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            sumr[i] += arr[i][j];
            sumc[j] += arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nSum of all elements in row(%d) is %d", i + 1, sumr[i]);
        printf("\nSum of all elements in column(%d) is %d", i + 1, sumc[i]);
    }

    return 0;
}