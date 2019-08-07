#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int findNo(int temp){
	while(true){
		temp += 1;
		int k=temp;
		int sum=0;
		while(k){
			sum+=k%10;
			k=k/10;
		}
		int j = sum%10;
		if(j==0){break;}	
	}
	return temp;
	
}

int main(){
	int T;
	cin >> T;
	vector<ulli> v{19};
	while(T--){
		ulli N;
		cin >> N;
		ulli l = v.size();
		if(N<=l){cout << v[N-1] << endl;}
		else{
			for(int i=l;i<N;i++){
				l = v.size();
				int temp = v[l-1];
				int k = findNo(temp);
				v.push_back(k);
			}
			cout << v[N-1] << endl;
		}
	}
	return 0;
}