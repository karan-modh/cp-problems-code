#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int x,y;
		cin >> x >> y;
		if(x==y){
			if(x%2==0){cout << 2*x << endl;}
			else{cout << (2*x)-1 << endl;}
		}
		else if(y == x-2){
			if(x%2==0){cout << (2*x)-2 << endl;}
			else{cout << (2*x)-3 << endl;}
		}
		else{
			cout << "No Number" << endl;
		}
	}
	return 0;
}