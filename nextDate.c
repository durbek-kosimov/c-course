#include <stdio.h>
int main()
{
    int day;
    int month;
    int year;
    int last;
    int r;

    printf("Enter in numeric format in one row\n");
    printf("today's date\n");
    printf("Day, month, year: ");
    scanf("%d%d%d", &day, &month, &year);
    last = 0;
    if (month == 2) {
        if ((year % 4) != 0 && day == 28) 
            last = 1;
        if ((year % 4) == 0 && day == 29) 
            last = 1;
    } 
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 30)) 
        last = 1;     
    else if (day == 31) 
        last = 1;    
    if (last == 1) {
        printf("The last day of the month!\n");
        day = 1;
        if (month == 12) {
            month = 1;
            year ++;
            printf("Happy New Year!\n");
        }
        else 
            month ++;        
    }
    else 
        day ++;    
    printf("Tomorrow is %d %d %d\n", day, month, year);
    return 0;          
}