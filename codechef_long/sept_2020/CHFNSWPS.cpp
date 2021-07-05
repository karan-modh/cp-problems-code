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
void inpVector(vector<T> &v, int n){
	rep(i,0,n){cin>>v[i];}
}

void solve(){
	int N;	cin >> N;
	int ans=0;
	if(N%4 == 0 || N%4==3){
		ump<int,int> sums;
		int prev = 0;
		rep(i,1,N+1){
			sums[prev + i] = i;
			prev = prev+i;
		}
		if(sums.find(prev/2) != sums.end()){
			int t = prev/2;
			int x = sums[t];
			int y = N-x;
			ans += ((x-1)*x)/2;
			ans += (y*(y-1))/2;
		}
		if(N%4!=0){
			N+=1;
		}
		ans += N/4;
		ans++;
		cout << ans << endl;
	}
	else{
		cout << ans << endl;
	}
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
