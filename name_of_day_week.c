#include <stdio.h>

int main()
{
    int nd;
    puts("Enter number of week (1..7): ");
    scanf("%d", &nd);
    switch (nd)
    {
        case 1:
            puts("Monday\n");
            break;
        case 2:
            puts("Tuisday\n");
            break;
        case 3:
            puts("Wedneyday\n");
            break;
        case 4:
            puts("Thuisday\n");
            break;
        case 5:
            puts("Friday\n");
            break;
        case 6:
            puts("Saturday\n");
            break;
        case 7:
            puts("Sunday\n");
            break;                
        default:
            puts("The umber must be in range 1..7\n");
        }

    return 0;
}