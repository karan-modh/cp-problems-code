#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		vector<int> v(N);
		int maxSum=0;
		for(int i=0;i<N;i++){
			int a;cin>>a;
			v[i] = a;
			maxSum += v[i]*(i+1);
		}
		vector<int> swapped;
		for(int i=0;i<N;i++){
			for(int j=i;j<N;j++){
				
			}
		}
	}
	return 0;
}