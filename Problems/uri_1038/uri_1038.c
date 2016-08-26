#include <stdio.h>

int main() {
    double prices[5] = {4, 4.5, 5, 2, 1.5};
    int code, n;
    while (scanf("%d %d", &code, &n) == 2) {
        printf("Total: R$ %.2lf\n", prices[code-1] * n);
    }
    return 0;
}
