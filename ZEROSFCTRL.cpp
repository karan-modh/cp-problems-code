#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;cin>>T;
	while(T--){
		int N;
		cin >> N;
		int noZeros = 0;
		for(int i=5;N/i>=1;i*=5){
			noZeros+=N/i;
		}
		cout << noZeros << endl;
	}
	return 0;
}