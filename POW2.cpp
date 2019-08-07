#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

void check(ulli N){
	int flag=0;
	if(N==0){flag=1;}
	while(N){
		if(N==1){break;}
		if(N%2==1){flag=1;break;}
		N = N/2;
	}
	if(flag==0){cout << "YES" << endl;}
	else{cout << "NO" << endl;}
}

int main(){
	int T;cin>>T;
	while(T--){
		ulli N;
		cin >> N;
		check(N);		
	}
	return 0;
}