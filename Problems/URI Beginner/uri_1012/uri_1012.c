#include <stdio.h>

#define PI 3.14159

double triArea(double b, double h) {
	return b * h/2.0;
}

double circleArea(double r) {
	return PI * r * r;
}

double trapArea(double b1, double b2, double h) {
	return h * (b1 + b2)/2.0;
}

double squareArea(double s) {
	return s * s;
}

double rectArea(double b, double h) {
	return b * h;
}

int main() {
	double a, b, c;
	while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
		printf("TRIANGULO: %.3lf\n", triArea(a, c));
		printf("CIRCULO: %.3lf\n", circleArea(c));
		printf("TRAPEZIO: %.3lf\n", trapArea(a, b, c));
		printf("QUADRADO: %.3lf\n", squareArea(b));
		printf("RETANGULO: %.3lf\n", rectArea(a, b));
	}
	return 0;
}
