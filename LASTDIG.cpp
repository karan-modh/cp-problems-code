#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main(){
	int T;
	cin >> T;
	while(T--){
		int a;
		ulli b;
		cin >> a >> b;
		if(a==0){cout << "0" << endl;}
		else if(b==0){cout << "1" << endl;}
		else{
			a = a%10;
			vector<int> v{6,2,4,8,1,3,9,7,1,7,9,3,6,8,4,2};
			std::vector<int> v4{6,4,1,9};
			if(a == 4 || a == 9){
				b=b%2;
				if(a==4){cout << v4[b] << endl;}
				else{cout << v4[b+2] << endl;}
			}
			else if(a == 2 || a == 3 || a == 7 || a == 8){
				b=b%4;
				if(a<4){a=a-2;}
				else{a=a-5;}
				a=a*4;
				b=b+a;
				cout << v[b] << endl;
			}
			else{
				cout << a << endl;
			}
		}
	}
	return 0;
}