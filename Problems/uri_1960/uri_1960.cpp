#include <iostream>using namespace std;int main() {	string h[9] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};	string t[9] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};	string u[9] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};	int ns[3] = {100, 10, 1};	string *ps[3] = {h, t, u};	string num;	int n, i, r, p;	while (cin >> n) {		for (i = 0; i < 3 && n > 0; i++) {			while (n >= ns[i]) {				r = n/ns[i];				n = n%ns[i];				cout << ps[i][r-1];			}		}		cout << endl;	}	return 0;}