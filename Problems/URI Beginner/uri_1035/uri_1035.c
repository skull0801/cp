#include <stdio.h>

int main() {
    int a, b, c, d;
    int accepted;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        accepted = c >= 0 && d >= 0 && !(a%2) && b > c && d > a && c + d > a + b;
        printf("Valores %saceitos\n", accepted ? "" : "nao ");
    }
    return 0;
}
