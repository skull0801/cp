#include <iostream>#include <vector>#include <algorithm>using namespace std;const vector<string> r1 = {"tesoura", "papel", "pedra", "lagarto", "Spock"};const vector<string> r2 = {"tesoura", "lagarto", "papel", "Spock", "pedra"};int main() {	int t, i = 0;	string r, s, a, b;	cin >> t;	while (t--) {		printf("Caso #%d: ", ++i);		cin >> s >> r;		if (s == r) {			printf("De novo!\n");			continue;		}		auto si1 = find(r1.begin(), r1.end(), s) - r1.begin();		a = r1[(si1 + 1 > 4 ? 0 : si1 + 1)];		if (a == r) {			printf("Bazinga!\n");			continue;		}		a = r1[(si1 - 1 < 0 ? 4 : si1 -1)];		if (a == r) {			printf("Raj trapaceou!\n");			continue;		}		si1 = find(r2.begin(), r2.end(), s) - r2.begin();		a = r2[(si1 + 1 > 4 ? 0 : si1 + 1)];		if (a == r) {			printf("Bazinga!\n");			continue;		}		printf("Raj trapaceou!\n");	}	return 0;}
