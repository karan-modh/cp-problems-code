#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main(){
	int T;cin>>T;
	while(T--){
		ulli k;
		cin >> k;
		ulli temp = 192 + (k-1)*250;
		cout << temp << endl;
	}
	return 0;
}