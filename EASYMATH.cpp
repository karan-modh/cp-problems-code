#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int A){
	int sum=0;
	while(A){
		sum += A%10;
		A = A/10;
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		vector<int> v(N);
		for (int i = 0; i < N; ++i){
			int a;
			cin >> a;
			v[i] = a;
		}
		int maxSum=0;
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				int prod = v[i]*v[j];
				int sum = sumOfDigits(prod);
				if(sum>maxSum){maxSum = sum;}
			}
		}
		cout << maxSum << endl;
	}
	return 0;
}