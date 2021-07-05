#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;	cin >> T;
	while(T--){
		int N;	cin >> N;
		long long ans = 0;
		int prev;
		for(int i=0;i<N;i++){
			int s;	cin>>s;
			if(i!=0){
				ans += abs(prev-s)-1;
			}
			prev = s;			
		}
		cout << ans << endl;
	}
	return 0;
}