#include <stdio.h>

#define EPS 1.0E-2

int greater(double a, double b) {
    return a - b > EPS;
}

int smaller(double a, double b) {
    return greater(b, a);
}

double avg(double *nums, int count, double *weights) {
    int i;
    double sum = 0;
    double wSum = 0;
    for (i = 0; i < count; i++) {
        sum += nums[i] * weights[i];
        wSum += weights[i];
    }
    return count > 0 ? sum/wSum : 0;
}

int main() {
    double g[5], av;
    double w[4] = {2, 3, 4, 1};
    int read = 1, i;
    while (read) {
        for (i = 0; i < 4 && (read = scanf("%lf", g+i) == 1); i++);
        if (read) {
            // printf("%lf %lf %lf %lf\n", g[0], g[1], g[2], g[3]);
            av = avg(g, 4, w);
            printf("Media: %.1lf\n", av);
            if (greater(av, 7.0f)) {
                printf("Aluno aprovado.\n");
            } else if (smaller(av, 5.0f)) {
                printf("Aluno reprovado.\n");
            } else {
                printf("Aluno em exame.\n");
                if (scanf("%lf", g+4) == 1) {
                    printf("Nota do exame: %.1lf\n", g[4]);
                    av += g[4];
                    av /= 2;
                    if (greater(av, 5.0f)) {
                        printf("Aluno aprovado.\n");
                    } else {
                        printf("Aluno reprovado.\n");
                    }
                    printf("Media final: %.1lf\n", av);
                }
            }
        }
    }
    return 0;
}
