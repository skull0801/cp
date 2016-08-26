#include <stdio.h>
#include <math.h>

int main() {
    int histogram[10] = {0};
    double pos[6000][4];
    int res = 0, i, j, n = 0;
    double r = 0, cl;
    while (scanf("%lf %lf %lf", pos[n], pos[n]+1, pos[n]+2) == 3 && (pos[n][0] + pos[n][1] + pos[n][2])) {
        n++;
    }
    for (i = 0; i < n; i++) {
        cl = 300.0;
        for (j = 0; j < n; j++) {
            if (i == j)
                continue;
            r = sqrt(
                (pos[i][0] - pos[j][0])*(pos[i][0] - pos[j][0]) +
                (pos[i][1] - pos[j][1])*(pos[i][1] - pos[j][1]) +
                (pos[i][2] - pos[j][2])*(pos[i][2] - pos[j][2]));
            if (r < cl) {
                cl = r;
            }
        }
        res = (int) floor(cl);
        if (res >= 0 && res < 10) {
            histogram[res]++;
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%4d", histogram[i]);
    }
    printf("\n");
    return 0;
}
