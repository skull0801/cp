#include <iostream>using namespace std;int main() {	int n, i;	while (cin >> n) {		if (n > 2) {			for (i = 2; i <= 10000; i+=n) {				printf("%d\n", i);			}		}	}	return 0;}
