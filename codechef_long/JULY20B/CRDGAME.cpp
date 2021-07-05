#include<bits/stdc++.h>
using namespace std;

int process(int A){
	int ans = 0;
	while(A){
		ans += A%10;
		A/=10;
	}
	return ans;
}

int main(){
	int T;	cin >> T;
	while(T--){
		int N;	cin >> N;
		int chef = 0;
		int morty = 0;
		for(int i=0;i<N;i++){
			int Ai;	cin >> Ai;
			int Bi;	cin >> Bi;	
			int m = process(Bi);
			int c = process(Ai);
			if(c == m){
				chef++;
				morty++;
			}
			else if(c > m){
				chef++;
			}
			else{
				morty++;
			}
		}
		if(chef == morty){
			cout << 2 << " " << chef << endl;
		}
		else if(chef > morty){
			cout << 0 << " " << chef << endl;
		}
		else{
			cout << 1 << " " << morty << endl;
		}
	}
	return 0;
}