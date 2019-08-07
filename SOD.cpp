#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	while(T--){
		string s;
		cin >> s;
		int sum = 0;
		for(int i=0;i<s.length();i++){
			int j = s[i]-48;
			sum += j;
		}
		cout << sum << endl;
	}
	return 0;
}