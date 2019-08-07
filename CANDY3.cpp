#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define M 1000000007

int main(){
	int T;
	cin >> T;
	while(T--){
		ulli N;
		cin >> N;
		ulli sum=0;
		ulli k;
		for(ulli i = 0;i<N;i++){
			cin>>k;
			sum += k;
		}
		if(sum%N==0){cout << "YES" << endl;}
		else{cout << "NO" << endl;}

	}
	return 0;
}