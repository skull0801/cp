#include <iostream>using namespace std;int main() {	string a;	while (getline(cin, a, '\n')) {		printf("%s\n", a.length() <= 80 ? "YES" : "NO");	}	return 0;}
