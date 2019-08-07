#include<bits/stdc++.h>
using namespace std;

template <class T>
void inputVec(vector<T> &V,int N){
	for(int i=0;i<N;i++){
		T a;
		cin >> a;
		V[i] = a;
	}}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		vector<int> A(N);
		for(int i=0;i<N;i++){
			int a;
			cin >> a;
			a*=20;
			A[i] = a;
		}
		int max = 0;
		for(int i=0;i<N;i++){
			int b;
			cin >> b;
			b*=10;b*=(-1);
			A[i] += b;
			if(A[i]<0){A[i]=0;}
			if(A[i]>max){max=A[i];}
		}
		cout << max << endl;
	}
	return 0;
}