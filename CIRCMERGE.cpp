#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;cin>>T;
	while(T--){
		int N;
		cin >> N;
		vector<int> arr(N);
		for(int i=0;i<N;i++){
			cin >> arr[i];
		}
		int penalty=0;
		while(arr.size() != 1){
			int mins,pairsum,mini;
			for(int i=0;i<arr.size();i++){
				if(i==arr.size()-1){
					pairsum = arr[i] + arr[0];
				}
				else{
					pairsum = arr[i] + arr[i+1];
				}
				if(pairsum < mins || i==0){mins = pairsum;mini=i;}
			}
			penalty += mins;
			arr[mini] = mins;
			if(mini == arr.size()-1){mini = -1;}
			arr.erase(arr.begin() + mini+1);
		}
		cout << penalty << endl;
	}
	return 0;
}