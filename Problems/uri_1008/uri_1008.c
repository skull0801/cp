#include <stdio.h>

int main() {
    int n, h;
    double p;
    while (scanf("%d %d %lf", &n, &h, &p) == 3) {
        printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", n, h * p);
    }
    return 0;
}
