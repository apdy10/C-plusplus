#include<iostream>
using namespace std;
int multiply(int a, int b) {
	return (a * b);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, j;
	cin >> n >> j;
	cout << multiply(n, j) << endl;
	return 0;
}
