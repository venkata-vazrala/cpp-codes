#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int print1(int n) {
	for (int i = 1; i <= 2*n; i++) {
		for (int j = 0; j <= n - i; j++) {
			cout << "* ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << "  ";
		}
		for (int j = 0; j <= n - i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

int main() {
	int n;
	cin >> n;
	print1(n);
	return 0;
}