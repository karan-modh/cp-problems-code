#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main(){
	int T;cin>>T;
	while(T--){
		int N;
		cin >> N;
		vector<ulli> V(N);
		double total=0;
		for(int i=0;i<N;i++){
			cin >> V[i];
			total+=V[i];
		}
		double avg = total/(double)N;
		if(avg - (int)avg != 0){
			cout << "Impossible" << endl;
		}
		else{
			int i;
			for(i=0;i<N;i++){
				if(V[i] == avg){cout << i+1 << endl;break;}
			} 
			if(i==N){cout << "Impossible" << endl;}
		}
	}
	return 0;
}