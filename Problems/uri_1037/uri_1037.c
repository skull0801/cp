#include <stdio.h>
#include <stdlib.h>

#define EPS 1.0E-6

int greater(double a, double b) {
    return a - b > EPS;
}

int main() {
    double num;
    while (scanf("%lf", &num) == 1) {
        if (greater(0.0f, num) || greater(num, 100.0f)) {
            printf("Fora de intervalo\n");
        } else {
            printf ("Intervalo ");
            if (greater(num, 75.0f)) {
                printf("(75,100]");
            } else if (greater(num, 50.0f)) {
                printf("(50,75]");
            } else if (greater(num, 25.0f)) {
                printf("(25,50]");
            } else {
                printf("[0,25]");
            }
            printf("\n");
        }
    }
    return 0;
}
