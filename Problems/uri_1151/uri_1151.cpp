#include <iostream>using namespace std;int main() {	int n1, n2, n, a;	while (cin >> n) {		printf("0");		n1 = 0;		n2 = 1;		if (n--) {			n--;			printf(" 1");		}		while(n--) {			a = n1 + n2;			n1 = n2;			n2 = a;			printf(" %d", a);		}		printf("\n");	}	return 0;}
