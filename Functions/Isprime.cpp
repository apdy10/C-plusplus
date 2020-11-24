#include<iostream>
using namespace std;
bool isPrime(int n){
	int d=2;
	while(d<n){
		if(n%d == 0){
			return false;
			}
		d++;
		}
	return true;
	}
int main(){
	bool ans= isPrime(17);
	cout<<ans<<endl;
	ans= isPrime(34);
	cout<<ans<<endl;
}

