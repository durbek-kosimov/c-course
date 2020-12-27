#include <stdio.h>
int main()
{
    int year;
    int r;
    printf("Enter year, for instance 2020, and press Enter: ");
    scanf("%d", &year);
    r = year % 4;
    if(r)
        printf("The %d is not leap year\n", year);
    else
        printf("The %d is leap year\n", year);
}
