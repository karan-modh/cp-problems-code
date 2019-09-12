#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

void findeven(vector<ull>&B,ull x)
{
  if(x == 1)
  cout<<B[0]<<endl;
  else
  {
    vector<ull>anss(x/2);
    int j=0;
    for(int i=0;i<x;i++)
    {
      if((i%2)!=0)
      {
        anss[j]=B[i];
        j++;
      }
    }
    findeven(anss,x/(2)); 
  }
}

int main()
{
  int t;cin>>t;
  while(t--)
  {
    ull n,l=1;cin>>n;
    vector<ull> v(n);
    v[0]=0;v[1]=1;
    vector<ull> ans(n/(2));
    ans[0]=1;
    int j=1;
    for(int i=2;i<n;i++)
    {
      v[i]=(v[i-1]+v[i-2])%10;
      if((i%2)!=0)
      {
        ans[j]=v[i];
        j++;
      }
    }
    findeven(ans,(n/2));
  }
  return 0;
}