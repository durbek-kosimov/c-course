#include <stdio.h>
main()
{
    float amount, money;
    int s;
    amount = 18.45;
    printf("Total sum is %.2f euro\n", amount);
    printf("Pay the amount: ");
    scanf("%f", &money);
    if (money > amount) {
        s = money * 100 - amount * 100;
        printf("Change is = %d eur, %d cents\n", s / 100, s % 100);
    } 
    else {
        s = amount * 100 - money * 100;
        printf("Must be payed %d eur and %d cent\n", s / 100, s % 100);
    }
    return 0;
}

