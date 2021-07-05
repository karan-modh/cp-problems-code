#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vs vector<string>
#define ump unordered_map
#define F first
#define S second
#define rep(i,x,n) for(int i=x;i<n;i++)
#define rfor0(i,n) for(int i=n-1;i>=0;i--)
#define rfor1(i,n) for(int i=n;i>=1;i--)
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
	vi sticks(N);
	inpVector(sticks);
	sort(all(sticks), greater<int>());
	int prev = sticks[0];
	int ans = 1;
	rep(i,1,N){
		while(sticks[i]==sticks[prev] && i<N){
			i++;
		}
		prev = i;
		ans++;
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
