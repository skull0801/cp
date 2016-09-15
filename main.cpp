#include <iostream>
#include <cmath>
#include <cstdio>

#define EPS 1.0E-9

using namespace std;

class Point {
public:
	double x, y;

	Point(double xv = 0, double yv = 0) : x(xv), y(yv) {}
};

// D = 0: R pertence a reta PQ
// D > 0: R à esquerda da reta PQ
// D < 0: R à direita da reta PQ
double D(const Point& P, const Point& Q, const Point& R)
{
    return (P.x * Q.y + P.y * R.x + Q.x * R.y) - (R.x * Q.y + R.y * P.x + Q.x * P.y);
}

bool equalsT (double a, double b) {
	return fabs(a - b) < EPS;
}

bool lessT (double a, double b) {
	return a - b < EPS;
}

bool moreT (double a, double b) {
	return lessT(b, a);
}

bool lessOrEqual (double a, double b) {
	return lessT(a, b) || equalsT(a, b);
}

bool moreOrEqual (double a, double b) {
	return moreT(a, b) || equalsT(a, b);
}

class Segment {
public:
    Point A, B;

	Segment() {}
    Segment(const Point& Av, const Point& Bv) : A(Av), B(Bv) {}

    double length() const
    {
        return hypot(A.x - B.x, A.y - B.y);
    }

    // Verifica se um ponto da reta _r_ que contém _A_ e _B_ pertence ao segmento
    bool contains(const Point& P) const
    {
        if (equalsT(A.x, B.x))
            return lessOrEqual(min(A.y, B.y), P.y) && lessOrEqual(P.y, max(A.y, B.y));
        else
            return lessOrEqual(min(A.x, B.x), P.x) && lessOrEqual(P.x, max(A.x, B.x));
    }

    bool intersect(const Segment& s) const
    {
		if (equalsT(A.x, B.x) && equalsT(A.y, B.y) && equalsT(s.A.x, s.B.x) && equalsT(s.A.y, s.B.y))
			return equalsT(A.x, s.A.x) && equalsT(A.y, s.A.y);
			
        double d1 = D(A, B, s.A);
        double d2 = D(A, B, s.B);

        if ((equalsT(d1, 0) && contains(s.A)) || (equalsT(d2, 0) && contains(s.B)))
            return true;

        double d3 = D(s.A, s.B, A);
        double d4 = D(s.A, s.B, B);

        if ((equalsT(d3, 0) && s.contains(A)) || (equalsT(d4, 0) && s.contains(B)))
            return true;

        return (lessT(d1 * d2, 0)) && (lessT(d3 * d4, 0));
    }
};

bool insideOfPoly(Segment *sides, int n, const Point& p) {
	double a;
	for (int i = 0; i < n; i++) {
		a = D(sides[i].A, sides[i].B, p);
		if (moreT(a, 0)) {
			return false;
		}
	}
	return true;
}

int main() {
	int t, a, i;
	bool inter;
	Point p1, p2;
	Segment sides[5];
	Segment line;
	a = scanf("%d", &t);
	while (t--) {
		a = scanf("%lf %lf %lf %lf", &(p1.x), &(p1.y), &(p2.x), &(p2.y));
		line.A = p1;
		line.B = p2;
		a = scanf("%lf %lf %lf %lf", &(p1.x), &(p1.y), &(p2.x), &(p2.y));
		sides[0].A.x = p1.x;
		sides[0].A.y = p1.y;
		sides[0].B.x = p2.x;
		sides[0].B.y = p1.y;
		sides[1].A.x = p2.x;
		sides[1].A.y = p1.y;
		sides[1].B.x = p2.x;
		sides[1].B.y = p2.y;
		sides[2].A.x = p2.x;
		sides[2].A.y = p2.y;
		sides[2].B.x = p1.x;
		sides[2].B.y = p2.y;
		sides[3].A.x = p1.x;
		sides[3].A.y = p2.y;
		sides[3].B.x = p1.x;
		sides[3].B.y = p1.y;
		if (insideOfPoly(sides, 4, line.A)) {
			printf("T\n");
			continue;
		}
		inter = false;
		for (i = 0; i < 4 && !inter; i++) {
			inter |= sides[i].intersect(line);
		}
		printf("%s\n", inter ? "T" : "F");
	}
	return 0;
}




