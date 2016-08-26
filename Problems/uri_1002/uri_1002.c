#include <stdio.h>

#define PI 3.14159

int main() {
    double r;
    while (scanf("%lf", &r) != EOF) {
        printf("A=%0.4lf\n", PI * r * r);
    }
    return 0;
}
