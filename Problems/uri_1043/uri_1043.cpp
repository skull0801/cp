#include <iostream>

using namespace std;

int isTriangle(double a, double b, double c) {
	return (a < b + c) && (b < c + a) && (c < a + b);
}

int main() {
	double a, b, c;
	while (scanf("%lf %lf %lf", &a, &b, &c) == 3)  {
		if (isTriangle(a, b, c)) {
			printf("Perimetro = %.1lf\n", a + b + c);
		} else {
			printf("Area = %.1lf\n", c/2.0 * (a + b));
		}
	}
    return 0;
}
