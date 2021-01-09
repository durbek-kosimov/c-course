#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int num1, num2;
int res;
int ans;
int numOfCorrectAnss = 0;
int i;
time_t t;
printf("\n***Test of knowledge of Multiplication Table***\n");
printf("After example enter your answer and press <Enter>\n");
srand((unsigned) time(&t));
    for (i = 1; i <= 10; i++)
    {
        num1 = rand() % 7 + 2;
        num2 = rand() % 7 + 2;
        res = num1 * num2;
        printf("%d x %d = ", num1, num2);
        scanf("%d", &ans);
        if (ans == res)
        {
            numOfCorrectAnss ++;
        }
        else
        {
            printf("Wrong! %d x %d = %d\n Let's continue...\n", num1, num2, res);
        }
    }
    printf("\n Correct answers: %d\n", numOfCorrectAnss);
    printf("Your score: ");
    switch (numOfCorrectAnss)
    {
    case 10:
        puts("5");
        break;
    case 9:
    case 8:
        puts("4");
        break;
    case 7:
        puts("3");
        break;
    default:
        puts("2");
        break;
    }
    return 0;
}
