#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N != -1){
		vector<int> v(N);
		int sum=0;
		for(int i=0;i<N;i++){
			cin >> v[i];
			sum+=v[i];
		}
		float avg = float(sum)/float(N);
		int iavg = sum/N;
		int count = 0;
		if(avg == float(iavg)){
			for(int i=0;i<N;i++){
				if(v[i]<iavg){count += iavg-v[i];}
			}
			cout << count << endl;
		}
		else{
			cout << -1 << endl;
		}
		cin >> N;
	}
	return 0;
}