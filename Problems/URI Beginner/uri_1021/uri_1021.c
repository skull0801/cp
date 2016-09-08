#include <stdio.h>

int main() {
	int bills[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
	char *prefix;
    int coinsStart = 6;
	int total, i, changed;
	double tIn;
	int amountBill;
	while (scanf("%lf", &tIn) == 1) {
		total = (int)(tIn * 100);
		i = 0;
		printf("NOTAS:\n");
		changed = 0;
		prefix = "nota";
		while (total > 0 || i < 12) {
			amountBill = total/bills[i];
			total -= bills[i]*amountBill;
			if (!changed && i >= coinsStart) {
				changed = 1;
				printf("MOEDAS:\n");
				prefix = "moeda";
			}
			printf("%d %s(s) de R$ %.2f\n", amountBill, prefix, bills[i++]/100.0);
		}
	}
    return 0;
}
