#include <stdio.h>

int main() {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("MEDIA = %0.5lf\n", ((a * 3.5) + (b * 7.5))/11.0);
    }
    return 0;
}
