#include <iostream>using namespace std;int main() {	int a, n, i, s;	while (cin >> a) {		while (cin >> n, n < 1);		for (s = 0, i = a; i < a + n; i++) {			s += i;		}		printf("%d\n", s);	}	return 0;}
