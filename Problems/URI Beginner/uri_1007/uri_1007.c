#include <stdio.h>

int main() {
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        printf("DIFERENCA = %d\n", (a * b) - (c * d));
    }
    return 0;
}
