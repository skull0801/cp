#include <stdio.h>

int main() {
    double d, c;
    while (scanf("%lf %lf", &d, &c) == 2) {
        printf("%.3lf km/l\n", d/c);
    }
    return 0;
}
