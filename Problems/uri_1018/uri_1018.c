#include <stdio.h>

int main() {
	int bills[7] = {100, 50, 20, 10, 5, 2, 1};
	int total, i;
	int amountBill;
	while (scanf("%d", &total) == 1) {
		i = 0;
		printf("%d\n", total);
		while (total > 0 || i < 7) {
			amountBill = total/bills[i];
			total -= bills[i]*amountBill;
			printf("%d nota(s) de R$ %d,00\n", amountBill, bills[i++]);
		}
	}
    return 0;
}
