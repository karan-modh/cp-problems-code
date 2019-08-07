#include<bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int k;
		cin >> k;
		if(k==0){break;}
		else{
			string s;
			cin >> s;
			int l = s.size();
			vector<char> v(l);
			for(int i=0;i<l;i++){
				v[i] = s[i];
			}
			int n=l/k;
			std::vector<char> vFinal;
			std::vector<int> temp;
			vector<char>::iterator itr;
			for(int x=k;x>1;x--){
				int j = 2*x;
				for(int i=0;i<v.size();i++){
					if(i%j == 0 || i%j == j-1){vFinal.push_back(v[i]);temp.push_back(i);}
				}
				for(int i=0;i<n;i++){
					int y = temp[i]-i;
					itr = v.begin()+y;
					v.erase(itr);
				}
				temp.clear();
			}
			for(int i=0;i<n;i++){
				vFinal.push_back(v[i]);
			}
			for (auto it = vFinal.begin(); it != vFinal.end(); ++it) 
        		cout << *it;
			cout << endl;	
		}
	}
	return 0;
}