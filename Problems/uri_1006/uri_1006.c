#include <stdio.h>

int main() {
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        printf("MEDIA = %0.1lf\n", ((a * 2.0) + (b * 3.0) + (c * 5.0))/10.0);
    }
    return 0;
}
