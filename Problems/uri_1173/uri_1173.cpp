#include <iostream>using namespace std;int main() {	int x[10], v, n, i;	while (cin >> v) {		*x = v;		for (i = 1; i < 10; i++) {			x[i] = x[i-1] * 2;		}		for (i = 0; i < 10; i++)			printf("N[%d] = %d\n", i, x[i]);	}	return 0;}
