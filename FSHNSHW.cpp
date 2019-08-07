#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;cin >> T;
	while(T--){
		int N;
		cin >> N;
		vector<int> menv(N);
		vector<int> womenv(N);
		for(int i=0;i<N;i++){
			cin >> menv[i];
		}
		for(int i=0;i<N;i++){
			cin >> womenv[i];
		}
		sort(menv.begin(),menv.end());
		sort(womenv.begin(),womenv.end());
		int sum =0;
		for(int i=0;i<N;i++){
			sum += (menv[i]*womenv[i]);
		}
		cout << sum << endl;
	}
	return 0;
}