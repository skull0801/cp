#include <iostream>using namespace std;int main() {	int x, n, s;	n = s = 0;	while (cin >> x, x >= 0) {		n++;		s+= x;	}	printf("%.2f\n", (float)s/n);	return 0;}
