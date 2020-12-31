#include <stdio.h>
int main()
{
    int day, month, year;
    int centure, y;
    int month_old_Rome_cal;
    int day_of_week;
    puts("Determination of day of week\n");
    puts("Enter the date: day, month, year\n");
    puts("For example, 5 12 2001 ");
    scanf("%d %d %d", &day, &month, &year);
    if (month == 1 || month ==2)
    {
        year --;
    }
    month_old_Rome_cal = month - 2;
    if (month_old_Rome_cal <= 0)
    {
        month_old_Rome_cal += 2;
    }
    centure = year / 100;
    y = year - centure * 100;   
    day_of_week = (day+(13*month_old_Rome_cal-1)/5+y+y/4+centure/4-2*centure+777)%7;
    switch (day_of_week)
    {
    case 1:
        puts("Monday\n");
        break;
    case 2:
        puts("Tuisday\n");
        break;
    case 3:
        puts("Wednesday\n");
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
        break;
    }
    return 0;
}