#include <iostream>#include <cmath>using namespace std;int digits(int n) {	double a = (double) n;	int i;	for (i = 0; 1.0 - a < 1.0E-9; i++)		a /= 10;	return i;}int main() {	int n, i, j, a, t;	while (cin >> n && n) {		a = (int) floor(pow(2, (double) (n-1) * 2));		t = digits(a);		for (i = 0; i < n; i++) {			for (j = 0; j < n; j++) {				if (j)					printf(" ");				a = (int) floor(pow(2, (double) i + j));				printf("%*d", t, a);			}			printf("\n");		}		printf("\n");	}	return 0;}