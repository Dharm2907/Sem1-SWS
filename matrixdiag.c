#include <stdio.h>
int main()
{

    int arr[3][3], diag[3], diagsec[3];

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
            if (i == j)
            {

                diag[i] = arr[i][j];
            }
            if (i + j == 2)
            {
                diagsec[i] = arr[i][j];
            }
        }
    }
    printf("\n\nElements of principle diagonals: ");
    for (int j = 0; j < 3; j++)
    {
        printf("%d  ", diag[j]);
    }
    printf("\n\nElements of secondary diagonals: ");
    for (int j = 0; j < 3; j++)
    {
        printf("%d  ", diagsec[j]);
    }

    return 0;
}