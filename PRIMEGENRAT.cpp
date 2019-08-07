#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int a,b;
		vector<int> primes;
		primes = primesGenerate(a,b);
		for(int i=0;i<primes.size();i++){cout << primes[i];}
	}
	return 0;
}