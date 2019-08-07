#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int A[n],B[n],C[n];
		for(int i=0;i<n;i++){
			cin >> A[i];
		}
		for(int i=0;i<n;i++){
			cin >> B[i];
			C[i] = A[i]%B[i];
		}

	}
	return 0;
}