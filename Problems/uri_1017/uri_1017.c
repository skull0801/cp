#include <stdio.h>

int main() {
	double t, speed;
	double kmpl = 12;
	while (scanf("%lf %lf", &t, &speed) == 2) {
		printf("%.3lf\n", (t*speed)/kmpl);
	}
    return 0;
}
