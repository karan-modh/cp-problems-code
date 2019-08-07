#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

template <class T>
void inputVec(vector<T> &V,int N){
	for(int i=0;i<N;i++){
		T a;
		cin >> a;
		V[i] = a;
	}}

bool solve(ulli N,ulli K){
	if(K==1){return true;}
	ulli temp = N/K;
	temp = temp%K;
	if(temp == 0){return true;}
	else{return false;}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		ulli N,K;
		cin >> N >> K;
		if(solve(N,K)){cout << "NO" << endl;} // Same #. Apple in Boxes
		else{cout << "YES" << endl;} // Different #. Apples in Boxes
	}
	return 0;
}