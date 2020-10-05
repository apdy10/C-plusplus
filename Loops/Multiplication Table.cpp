// // Multiplication Table.cpp

#include<iostream>
using namespace std;
int main()
{
	long long i,n;
	cout<<"Number whose multiplication table is to be printed:";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
