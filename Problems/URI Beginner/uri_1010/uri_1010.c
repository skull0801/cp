#include <stdio.h>

int main() {
	int c, n;
	double p, t = 0;
	while(scanf("%d %d %lf", &c, &n, &p) == 3) {
		t += n * p;
	}
	printf("VALOR A PAGAR: R$ %.2lf\n", t);
	return 0;
}
