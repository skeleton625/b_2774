#include <iostream>
using namespace std;

int t, r;
int n[10];
char i1[11];

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> i1;
		for (int j = 0; i1[j] != '\0'; j++) n[i1[j] - '0']++;
		for (int j = 0; j < 10; j++) {
			if (n[j] > 0) r++;
			n[j] = 0;
		}
		cout << r << endl;
		r = 0;
	}
	return 0;
}