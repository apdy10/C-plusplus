#include<iostream>
using namespace std;
void Print(int n) {
	int i = 1;
	while (i <= n) {
		cout << i << "\t";
		i++;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int num;
	cin >> num; // Number till which numbers are to be printed
	Print(num);
	return 0;

}
