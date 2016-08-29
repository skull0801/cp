#include <iostream>using namespace std;int main() {	int i, t;	while (cin >> t) {		t = t%2 ? t : t + 1;		for (i = t; i < t + 11; i+=2) {			cout << i << endl;		}	}	return 0;}
