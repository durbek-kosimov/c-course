#include <stdio.h>
int main()
{
    float t;
    int ts;
    int min;
    int sec;
 
    printf("Enter time (minute.second) ");
    scanf("%f", &t);
    min = t;
    sec = (t - min) * 100;
    printf("t - min = %f\n", t - min);
    printf("t = %f\n", t);
    printf("min = %d\n", min);
    printf("sec = %d\n", sec);

    if(sec > 60)
    {
        printf("Error!\n");
        printf("Amount of seconds can not be grater than 60\n");
    }
    else 
    {
        ts = min * 60 + sec;
        printf("%i min %i sec = %i sec\n", min, sec, ts);
    }
}
