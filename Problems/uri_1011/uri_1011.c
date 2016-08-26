#include <stdio.h>

#define PI 3.14159

int main() {
	double r;
	while(scanf("%lf", &r) == 1) {
		printf("VOLUME = %.3lf\n", 4/3.0 * PI * r * r * r);
	}
	return 0;
}
