#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;cin >> T;
	while(T--){
		int N,K;
		cin >> N >> K;
		vector<int> v(N);
		int damageCount=0;
		int contCount=0;
		for(int i=0;i<N;i++){
			int j; cin >> j;
			v[i] = j;
			if(j == 0){damageCount++;v[i] = contCount+2;contCount=0;}
			else{contCount++;}
		}
		if(K >= damageCount){cout << v.size()<<endl;}
		else{
			
		}
		for(int i=0;i<N;i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}