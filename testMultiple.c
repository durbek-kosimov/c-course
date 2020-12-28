#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m1, m2, p;
    int ans;
    time_t t;

    srand((unsigned) time(&t));

    m1 = rand() % 9 + 1;
    m2 = rand() % 9 +1 ;
    p = m1 * m2;
    printf("How many is %d x %d?\n", m1, m2);
    printf("Enter the answer and press <Enter>\n");
    printf("> ");
    scanf("%d", &ans);
    if (p == ans)
        printf("Correct.");
    else
        printf("You are wrong.\n%d x %d = %d\n", m1, m2, p);
    return 0;
}
