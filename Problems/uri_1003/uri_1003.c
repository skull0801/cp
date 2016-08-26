#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        printf("SOMA = %d\n", a+b);
    }
    return 0;
}
