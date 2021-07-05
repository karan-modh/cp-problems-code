#include<bits/stdc++.h>
using namespace std;

void print(vector<int> A){
	for(int i=0;i<A.size();i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

int main(){
	int T;	cin >> T;
	while(T--){
		int N;	cin >> N;
		vector<int> A(N);
		vector<int> B(N);
		unordered_map<int,int> Amap;
		unordered_map<int,int> Bmap;
		for(int i=0;i<N;i++){
			cin >> A[i];
			Amap[A[i]]++;
		}
		for(int i=0;i<N;i++){
			cin >> B[i];
			Bmap[B[i]]++;
		}

		int ans = 0;
		vector<int> Aswaps;
		auto x = Amap.begin();
		for(;x!=Amap.end();x++){
			int y = Bmap[x->first];
			if(y == x->second){
				continue;
			}
			else if((x->second - y)%2==0){
				for(int i=1;i<=(x->second-y)/2;i++){
					Aswaps.push_back(x->first);
				}
			}
			else{
				ans = -1;
				break;
			}
		}

		if(ans == -1){
			cout << ans << endl;
			continue;
		}

		vector<int> Bswaps;
		x = Bmap.begin();
		for(;x!=Bmap.end();x++){
			int y = Amap[x->first];
			if(y == x->second){
				continue;
			}
			else if((x->second - y)%2==0){
				for(int i=1;i<=(x->second-y)/2;i++){
					Bswaps.push_back(x->first);
				}
			}
			else{
				ans = -1;
				break;
			}
		}
		
		if(ans == -1){
			cout << ans << endl;
			continue;
		}

		sort(Aswaps.begin(), Aswaps.end());
		sort(Bswaps.begin(), Bswaps.end(), greater<int>());
		
		// print(Aswaps);
		// print(Bswaps);
		if(Aswaps.size() == 0 && Bswaps.size() == 0){
			cout << 0 << endl;
			continue;
		}
		ans = 0;
		for(int i=0;i<Aswaps.size();i++){
			ans += min(Aswaps[i],Bswaps[i]);
		}
		cout << ans << endl;
	}
	return 0;
}