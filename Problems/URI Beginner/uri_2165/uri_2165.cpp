#include <iostream>using namespace std;int main() {	string a;	getline(cin, a, '\n');	cout << (a.length() > 140 ? "MUTE" : "TWEET") << endl;	return 0;}
