#include <iostream>using namespace std;int main() {	int read = 0, i;	double g[2], x;	i = 1;	while (i == 1) {		i = 2;		read = 0;		while (read < 2 && scanf("%lf", &x) == 1) {			if (x >= 0 && x <= 10)				g[read++] = x;			else				cout << "nota invalida\n";		}		printf("media = %.2lf\n", (g[0] + g[1])/2);		do {			cout << "novo calculo (1-sim 2-nao)\n";		} while (scanf("%d", &i) == 1 && i != 1 && i != 2);	}	return 0;}