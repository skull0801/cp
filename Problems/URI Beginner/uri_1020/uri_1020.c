#include <stdio.h>

int main() {
	int d, m, y;
	int i, r;
	while (scanf("%d", &i) == 1) {
		y = i/365;
		r = i%365;
		m = r/30;
		d = r%30;
		printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
	}
    return 0;
}
