#include <iostream>using namespace std;int main() {	int h, n, i, p[200], a;	while (cin >> h >> n) {		for (i = 0; i < n; i++)			cin >> p[i];		a = 0;		for (i = 1; i < n; i++) {			if (abs(p[i] - p[i-1]) > h) {				a = 1;				break;			}		}		if (a) {			printf("GAME OVER\n");		} else {			printf("YOU WIN\n");		}	}	return 0;}
