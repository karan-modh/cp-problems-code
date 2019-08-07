#include<bits/stdc++.h>
using namespace std;

int rev(int a){
	int revN=0;
	while(a!=0){
		int r = a%10;
		a = a/10;
		revN = revN*10 + r; 
	}
	return revN;
}

int main(){
	int N;
	cin >> N;
	while(N--){
		int a,b;
		cin >> a >> b;
		a = rev(a);
		b = rev(b);
		int sum = a+b;
		sum = rev(sum);
		cout << sum << endl;
	}
	return 0;
}