#include <stdio.h>

int main() {
    double x = 60, y = 90, d;
    while (scanf("%lf", &d) == 1) {
        printf("%.0f minutos\n", d/(y-x)*60);
    }
    return 0;
}
