#include<bits/stdc++.h>
using namespace std;

int main(){
	int nS,nQ;
	cin >> nS;
	set<int> S;
	for(int i =0;i<nS;i++){
		int j;
		cin >> j;
		S.insert(j);
	}
	cin >> nQ;
	set<int>::iterator itr;
	for(int i=0;i<nQ;i++){
		int k;
		cin >> k;
		itr = S.find(k);
		if(itr == S.end()){}
		else{
			S.erase(k);
		}
	}
	for(itr = S.begin();itr != S.end();itr++){
		cout << *itr << " ";
	}
	return 0;
}