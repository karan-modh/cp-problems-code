#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vs vector<string>
#define ump unordered_map
#define F first
#define S second
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rev_rep(i,x,y) for(int i=x;i>=y;i--)
#define all(X) X.begin(),X.end()
#define mp make_pair
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

template <typename T>
void printVector(vector<T> &v){
	int n = v.size();
	rep(i,0,n){ cout<<v[i]<< " "; }
	cout << endl;
}

template <typename T>
void inpVector(vector<T> &v){
	int n = v.size();
	rep(i,0,n){cin>>v[i];}
}

void solve(){
	int N;	cin >> N;
	vector<vi> matrix(N, vi(N));
	rep(i,0,N){
		inpVector(matrix[i]);
	}
	int ans=0;
	rev_rep(i,N-1,0){
		if(matrix[0][i] != i+1){
			ans++;
		}
	}
	cout << ans << endl;
}

int main(){
	fastio;

	int T;
	cin >> T;
	while(T--){
		solve();
	}
	return 0;
}
