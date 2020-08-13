#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card[3];
    puts("Enter the card name: ");
    scanf("%2s", card);
    int  val = 0;
    if (card[0] == 'K')
        val = 10;
    else if (card[0] == 'Q')
        val = 10;
    else if (card[0] == 'J')
        val = 10;
    else if (card[0] == 'A')
        val = 11;
    else
        val = atoi(card);
    printf("The card valur is: %i\n", val);
    return 0;
}
