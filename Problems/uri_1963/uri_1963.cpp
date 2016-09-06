#include <iostream>using namespace std;int main() {	double a, b;	while (cin >> a >> b) {		printf("%.2lf%%\n", (b - a)/a * 100.0);	}	return 0;}
