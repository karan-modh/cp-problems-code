#include<bits/stdc++.h>
using namespace std;

int main(){
	int k; cin>>k;
	while(k){
		int noSquares=0;
		noSquares = k*(k+1)*(2*k+1);
		noSquares = noSquares/6;
		cout << noSquares << endl;
		cin >> k;
	}
	return 0;
}