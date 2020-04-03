#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j ++) {
            int x;
            scanf("%d", &x);
            if (x == 0)
                goto finish;
        }
    }
    finish:
        printf("Yes, there is x!\n");
    return 0;
}
