#include <stdio.h>
int main()
{
    int days, months, years, rem_days;

    printf("Enter total Days\n");
    scanf("%d", &days);

    years = days / 360;
    rem_days = days % 360;
    months = rem_days / 30;
    rem_days = rem_days % 30;
    printf("%d days= %d years %d months %d days\n", days, years, months, rem_days);

    return 0;
}