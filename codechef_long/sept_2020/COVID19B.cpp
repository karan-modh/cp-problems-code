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
	vi speeds(N);
	inpVector(speeds);
	map<int, set<int>> intersects;
	rep(i,0,N){
		rep(j,i+1,N){
			if(speeds[i] > speeds[j]){
				intersects[i].insert(j);
				intersects[j].insert(i);
			}
		}
	}
	int best = 1;
	int worst = 1;
	if(intersects.size()==0){
		cout << "1 1" << endl;
	}
	else if(intersects.size()!=N){
		cout << "1 ";
	}
	else{
		rep(i,0,N){
			if(intersects[i].size() == N-1){
				worst = N-1;
				break;
			}
		} 
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
