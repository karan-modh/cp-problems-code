#include<iostream>
using namespace std;

int sum(int a[],int num)
{
  int s=0;
  for(int m=0;m<num;m++)
  {
    s+=a[m];
  }
return s;
}

int main()
{
  int t,min;
  std::cin >> t;
  int res[t];
  for(int i=0;i<t;i++)
  {
    int n,k;
    std::cin >> n >> k;
    int arr[n];
    for(int j=0;j<n;j++)
    {
      std::cin >> arr[j];
    }
  for(int p=0;p<(n-1);p++)
  {
    for(int q=p+1;q<n;q++)
    {
      min=(arr[p]>arr[q])?arr[q]:arr[p];
      if(min>k)
      {
        arr[p]-=1;
        arr[q]-=1;

      }
    }
  }
  res[i]=sum(arr,n);
 }
 for(int i=0;i<t;i++)
 {
   std::cout << res[i] << endl;
 }
 return 0;
}
