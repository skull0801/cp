#include <stdio.h>
#include <math.h>

int main() {
	int primes[100000];
	int primesTo[100];
	int n, i, j;
	int p, b = 0, isPrime;
	int pFound = 1;
	primes[0] = 2;
	if (scanf("%d", &n) & 1) {
		for (i = 0; i < n; i++) {
			scanf("%d", primesTo+i);
			if (primesTo[i] > b) {
				b = primesTo[i];
			}
		}
		//calc all primes up to biggest
		for (i = 3; i <= b; i++) {
			isPrime = 1;
			for (j = 0; j < sqrt(pFound); j++) {
				if (!(i%primes[j])) {
					isPrime = 0;
					break;
				}
			}
			if (isPrime) {
				primes[pFound++] = i;
			}
		}
		for (i = 0; i < n; i++) {
			isPrime = 0;
			for (j = 0; j < pFound; j++) {
				if (primesTo[i] == primes[j]) {
					isPrime = 1;
					break;
				}
			}
			printf("%d %seh primo\n", primesTo[i], isPrime ? "" : "nao ");
		}
	}
	return 0;
}
