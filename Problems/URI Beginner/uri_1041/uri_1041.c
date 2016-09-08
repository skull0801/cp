#include <stdio.h>
#include <math.h>

#define EPS 1.0E-9

int greater(double a, double b) {
    return (a - b) > EPS;
}

int smaller(double a, double b) {
    return greater(b, a);
}

int equals(double a, double b) {
    return fabs(a - b) < EPS;
}

int main() {
    double x, y;
    int q;
    while (scanf("%lf %lf", &x, &y) == 2) {
        if(equals(x, 0.0f)) {
            if (equals(y, 0.0f)) {
                printf("Origem\n");
            } else {
                printf("Eixo Y\n");
            }
        } else if (equals(y, 0.0f)) {
            printf("Eixo X\n");
        } else {
            if (greater(x, 0.0f)) {
                if (greater(y, 0.0f)) {
                    q = 1;
                } else {
                    q = 4;
                }
            } else {
                if (greater(y, 0.0f)) {
                    q = 2;
                } else {
                    q = 3;
                }
            }
            printf("Q%d\n", q);
        }
    }
    return 0;
}
