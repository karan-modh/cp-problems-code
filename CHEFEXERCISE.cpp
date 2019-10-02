#include<bits/stdc++.h>

#define pii pair<int,int>
#define ll long long
#define pll pair<long,long>
#define MOD 1000000007
#define vi vector<int>
#define vc vector<char>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define vpii vector<pii>
#define vvpii vector<vpi>
#define F first
#define S second
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define rfor0(i,n) for(int i=n-1;i>=0;i--)
#define rfor1(i,n) for(int i=n;i>=1;i--)
#define all(X) X.begin(),X.end()
#define mp make_pair
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

// typedef template<T>
// void printVector(vector<T> &v){
// 	int n = v.size();
// 	for0(i,n){ cout<<v[i]<< " "; }
// 	cout << endl;
// }
// void inpVector(vector<T> &v, int n){
// 	for0(i,n){cin>>v[i];}
// }

bool solve(vi &v,vc &c){
	// stack<int> si;
	// stack<char> sc;
	int N = v.size();
	// for0(i,N-1){
	// 	if(v[i]==-1 && v[i]==-1){
	// 		si.push()
	// 	}
	// 	else if(v[i]==-1){

	// 	}
	// 	else if(v[i+1]==-1){

	// 	}
	// 	else{
	// 		char c = c[i];
	// 		switch(c){
	// 			case '=':
	// 				{
	// 					if(v[i]!=v[i+1]){
	// 						return false;
	// 					}
	// 					break;
	// 				}
	// 			case '>':
	// 				{
	// 					if(v[i]<=v[i+1]){
	// 						return false;
	// 					}
	// 					break;
	// 				}
	// 			case '<':
	// 				{
	// 					{
	// 					if(v[i]>=v[i+1]){
	// 						return false;
	// 					}
	// 					break;
	// 				}
	// 				}
	// 		}
	// 	}
	// }
	if(v[0]!=-1){
		for1(i,N){
			char d = c[i-1];
			if(d=='>'){
				if(v[i]==-1){
					v[i]=v[i-1]-1;
				}
				else{
					if(v[i-1]<=v[i]){
						return false;
					}
					continue;
				}
			}
			else if(d=='<'){
				if(v[i]==-1){
					v[i]=v[i-1]+1;
				}
				else{
					if(v[i-1]>=v[i]){
						return false;
					}
					continue;
				}
			}
			else{
				if(v[i]==-1){
					v[i]=v[i-1];
				}
				else{
					if(v[i-1]!=v[i]){
						return false;
					}
					continue;
				}
			}
		}
	}
	else{
		if(v[v.size()-1]!=-1){
			rfor0(i,N-1){
				char d = c[i-1];
				if(d=='>'){
					if(v[i]==-1){
						v[i]=v[i+1]+1;
					}
					else{
						if(v[i]<=v[i+1]){
							return false;
						}
						continue;
					}
				}
				if(d=='<'){
					if(v[i]==-1){
						v[i]=v[i+1]-1;
					}
					else{
						if(v[i]>=v[i+1]){
							return false;
						}
						continue;
					}
				}
				if(d=='='){
					if(v[i]==-1){
						v[i]=v[i+1];
					}
					else{
						if(v[i]!=v[i+1]){
							return false;
						}
						continue;
					}
				}
			}
		}
		else{
			int ind;
			for0(i,N){
				if(v[i]!=-1){
					ind=i;
				}
			}
			for(int i=ind+1;i<N;i++){
				char d = c[i-1];
				if(d=='>'){
					if(v[i]==-1){
						v[i]=v[i-1]-1;
					}
					else{
						if(v[i-1]<=v[i]){
							return false;
						}
						continue;
					}
				}
				else if(d=='<'){
					if(v[i]==-1){
						v[i]=v[i-1]+1;
					}
					else{
						if(v[i-1]>=v[i]){
							return false;
						}
						continue;
					}
				}
				else{
					if(v[i]==-1){
						v[i]=v[i-1];
					}
					else{
						if(v[i-1]!=v[i]){
							return false;
						}
						continue;
					}
				}

			}
			for(int i=ind-1;i>=0;i--){
				char d = c[i-1];
				if(d=='>'){
					if(v[i]==-1){
						v[i]=v[i+1]+1;
					}
					else{
						if(v[i]<=v[i+1]){
							return false;
						}
						continue;
					}
				}
				if(d=='<'){
					if(v[i]==-1){
						v[i]=v[i+1]-1;
					}
					else{
						if(v[i]>=v[i+1]){
							return false;
						}
						continue;
					}
				}
				if(d=='='){
					if(v[i]==-1){
						v[i]=v[i+1];
					}
					else{
						if(v[i]!=v[i+1]){
							return false;
						}
						continue;
					}
				}
			}
		}
	}
	return true;

}

int main(){

	int T;
	cin >> T;
	for1(t,T){
        int N;
        cin >> N;
        vi v(N);
        for0(i,N){
			cin >> v[i];
		}
        vc c(N-1);
        for0(i,N-1){
			cin >> c[i];
		}
        bool ans = solve(v,c);
		if(ans){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}