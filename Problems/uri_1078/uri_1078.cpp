#include <iostream>using namespace std;int main() {	int n, i;	while (cin >> n) {		for (i = 1; i <= 10; i++) {			printf("%d x %d = %d\n", i, n, i * n);		}	}	return 0;}
