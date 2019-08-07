#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	ulli n;
	while(cin >> n){
		ulli a,b,c;
		a=n/2;
		b=n/3;
		c=n/4;
		ulli f = a+b+c;
		if(f>n){cout << f <<endl;}
		else{cout << n << endl;}
	}
	return 0;
}