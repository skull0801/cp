#include <iostream>using namespace std;int main() {	int n = 0, a;	while (n < 10 && cin >> a) {		printf("X[%d] = %d\n", n++, a > 0 ? a : 1);	}	return 0;}