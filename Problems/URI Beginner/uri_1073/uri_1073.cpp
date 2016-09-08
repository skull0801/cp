#include <iostream>using namespace std;int main() {	int n, i;	while (cin >> n) {		for (i = 2; i <= n; i+=2) {			printf("%d^2 = %d\n", i, i * i);		}	}	return 0;}
