#include <bits/stdc++.h>
using namespace std;
long long func(long long num)
{
  vector<bool> n(num+1, 1);
  for(long long i=2;i*i<=num;i++)
  {
    if(n[i])
    for(long long j=i*i;j<=num;j+=i)
    {
      n[j]=0;
    }
  }
  long long count=0;
  for(long long i=1;i<=num;i++)
  {
  if(n[i])
  count++;
  }
return count;
}

int main()
{
   long long n;
   cin>>n;
   cout<<func(n);
   return 0;
}
