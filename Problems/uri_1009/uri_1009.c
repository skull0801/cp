#include <stdio.h>

int main() {
	char m[500];
	double b, s;
	while(scanf("%s %lf %lf", m, &b, &s) == 3) {
		printf("TOTAL = R$ %.2lf\n", b + s * 0.15);
	}
	return 0;
}
