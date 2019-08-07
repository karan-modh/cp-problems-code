#include <bits/stdc++.h>
using namespace std;

int main(){
	long int T;
	cin >> T;
	const unsigned int M = 1000000007; 
	while(T){
		long int n;
		cin >> n;
		unsigned long long int ans = 1;
		long int j,k;
		for(int i=2;i<=n;i++){
			ans = ans % M;
			j = i % M;
			k = ans*j;
			k = k % M;
			ans = ans + j + k;
			ans = ans%M;
		}
		cout << ans << endl;
		T--;
	}
	return 0;
}