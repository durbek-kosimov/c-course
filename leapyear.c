#include <stdio.h>
main()
{
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

