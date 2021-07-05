#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;	cin >> T;
	while(T--){
		int N;	cin >> N;
		unordered_map<int,int> xC;
		unordered_map<int,int> yC;
		int total = 4*N - 1;
		for(int i=1;i<=total;i++){
			int x;	cin >> x;
			int y;	cin >> y;
			if(xC[x]){
				xC.erase(x);
			}
			else{
				xC[x]++;
			}
			if(yC[y]){
				yC.erase(y);
			}
			else{
				yC[y]++;	
			}
			
		}
		auto itx = xC.begin();
		auto ity = yC.begin();
		cout << itx->first << " " << ity->first << endl;
	}
	return 0;
}