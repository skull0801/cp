#include <iostream>using namespace std;int main() {	long long i, n;	while (cin >> n) {		i = n;		while (--n) {			i *= n;		}		printf("%lld\n", i);	}	return 0;}
