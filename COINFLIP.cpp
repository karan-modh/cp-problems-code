#include<bits/stdc++.h>
using namespace std;

int playGame(int I,int N,int Q){
	int a = N%2;
	if(I!=Q && a){return (N+1)/2;}
	else{return N/2;}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int G;
		cin >> G;
		while(G--){
			int I,N,Q;
			cin >> I >> N >> Q;
			int ans = playGame(I,N,Q);
			cout << ans << endl;
		}
	}
	return 0;
}