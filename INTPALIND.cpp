#include<bits/stdc++.h>
using namespace std;

void findPal(int i, string pal, vector<char> &v){
	int l = pal.length();
	int j = l-1-i;
	if(pal[i] < v[j]){
		for(int p=l/2;p<l;p++){
			int k = l-1-p;
			v.push_back(v[k]);
		}
	}
	else if(pal[i] > v[j]){
		v[j] += 1;
		for(int p=l/2;p<l;p++){
			int k = l-1-p;
			v.push_back(v[k]);
		}	
	}
	else{
		i++;
		findPal(i,pal,v);
	}
}

int main(){
	int T;cin>>T;
	while(T--){
		string pal;
		cin >> pal;
		int l = pal.length();
		std::vector<char> v;
		int flag=1;
		for(int i=0;i<l/2;i++){
			if(pal[i] != pal[l-1-i]){flag=0;break;}
		}
		if(flag == 1){pal[l-1] += 1; cout << pal << " ";}
		if(l%2==0){
			int i;
			for(i=0;i<l/2;i++){
				v.push_back(pal[i]);
			}
			findPal(i,pal,v);
			for(int p=0;p<v.size();p++){
				cout << v[p];
			}
			cout << endl;
		}		
	}
	return 0;
}