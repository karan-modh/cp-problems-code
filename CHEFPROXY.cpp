#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int D;
		cin >> D;
		char ch;
		std::vector<char> v;
		std::vector<int> Aarr;
		int countAbsents=0;
		for(int i=0;i<D;i++){
			cin >> ch;
			if(ch=='A'){countAbsents++;Aarr.push_back(i);}
			v.push_back(ch);
		}
		int mini=0;
		float att = float(D-countAbsents)/float(D);
		if(att >= 0.75){cout << mini << endl;}
		else{
			for(int i=0;i<Aarr.size();i++){
				if(Aarr[i] > 1 && Aarr[i] < D-2){
					if((v[Aarr[i]-1] == 'P' || v[Aarr[i]-2] == 'P') && (v[Aarr[i]+1] == 'P' || v[Aarr[i]+2] == 'P')){
						mini++;
						countAbsents--;
						att = float(D-countAbsents)/float(D);
						if(att >= 0.75){cout << mini << endl;break;}
					}
				}
			}
			if(att<0.75){
				mini = -1;
				cout << mini << endl;
			}
		}
	}	
	return 0;
}