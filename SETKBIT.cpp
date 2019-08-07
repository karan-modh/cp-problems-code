#include<bits/stdc++.h>
using namespace std;
#define M 32

void setBits(int N, int K){
	bitset<M> bits(N);
	bits[K] = 1;
	int ans = (int)(bits.to_ulong());
	cout << ans << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int N,K;
		cin >> N >> K;
		setBits(N,K);
	}
	return 0;
}