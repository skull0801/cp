#include <iostream>using namespace std;int main() {	int in, t, n, x;	while (cin >> t) {		n = t;		in = 0;		while (t-- && cin >> x) {			if (x >= 10 && x <= 20)				in++;		}		printf("%d in\n%d out\n", in, n - in);	}	return 0;}
