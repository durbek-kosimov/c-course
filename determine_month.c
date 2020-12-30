#include <stdio.h>
int main()
{
    int month;
    puts("\nEnter number of month (numbers from 1 to 12)\n");
    printf("> ");
    scanf("%d", &month);
    if (month < 1 || month > 12)
        printf("The number must be from 1 to 12\n");
    else if (month >= 3 && month <= 5)
        printf("Spring\n");
    else if (month >= 6 && month <= 8)
        printf("Summer\n");
    else if (month >= 9 && month <= 11)
        printf("Autumn\n");
    else
        printf("Winter\n");
    return 0;       
}