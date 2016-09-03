#include <iostream>using namespace std;int main() {	int a, b, c;	while (cin >> a >> b) {
		c = a%abs(b);
		c = c >= 0 ? c : c + abs(b);		printf("%d %d\n", (a - c)/b, c);	}	return 0;}
