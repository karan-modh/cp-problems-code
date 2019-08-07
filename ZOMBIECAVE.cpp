#include<bits/stdc++.h>
using namespace std;

template <class T>
void inputVec(vector<T> &V,int N){
	for(int i=1;i<N;i++){
		T a;
		cin >> a;
		V[i] = a;
	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		
		vector<int> C(N+1,0);
		vector<int> H(N+1,0);
		vector<int> JminV(N+1,0);
		vector<int> JmaxV(N+1,0);

		for(int i=1;i<=N;i++){
			int temp;
			cin>>temp;
			int jmin = i-temp;
			if(jmin <= 0){jmin = 1;}
			int jmax = i+temp;
			if(jmax > N){jmax = N;}
			JminV[i] = jmin;
			JmaxV[i] = jmax;
		}
		
		int sum[N+1];
		memset(sum,0,sizeof(sum));

		for (int i=1;i<=N;i++){
			sum[JminV[i]] += 1;
			if(JmaxV[i]+1 < N+1){
				sum[JmaxV[i]+1] -= 1;
			}
		}

		C[1] += sum[1];
		for(int i=2;i<N+1;i++){
			sum[i] += sum[i-1];
			C[i] += sum[i];
		}

		inputVec(H,N+1);
		sort(C.begin(),C.end(),greater<int>());
		sort(H.begin(),H.end(),greater<int>());
		bool flag=1;
		for(int i=0;i<N;i++){
			if(C[i]<H[i] || C[i]>H[i]){flag=0;break;}
		}
		if(flag){cout << "YES" << endl;}
		else{cout << "NO" << endl;}
	}
	return 0;
}