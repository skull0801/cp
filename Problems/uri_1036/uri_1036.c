#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    double r1, r2;
    int calc;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if((calc = a)) {
            b = -b;
            delta = (b*b) - (4*a*c);
            if ((calc = delta >= 0)) {
                delta = sqrt(delta);
                a *= 2;
                r1 = (b + delta)/a;
                r2 = (b - delta)/a;
            }
        }
        if (calc) {
            printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
        } else {
            printf("Impossivel calcular\n");
        }
    }
    return 0;
}
