#include <stdio.h>

int main()
{
    int i = 5, j = 3;
    printf("%d %d", i / j, i % j);
    // output: 1, 2

    i = 2, j = 3;
    printf("%d", (i + 10) % j);
    // output: 0
}
