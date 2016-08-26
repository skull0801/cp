#include <stdio.h>

int main() {
	int t, r;
	int s, m, h;
	while (scanf("%d", &t) == 1) {
		h = t/3600;
		r = t%3600;
		m = r/60;
		s = r%60;
		printf("%d:%d:%d\n", h, m, s);
	}
    return 0;
}
