#include<bits/stdc++.h>

#define pii pair<int,int>
#define ll long long
#define pll pair<long,long>
#define MOD 1000000007
#define vi vector<int>
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

int main(){
	fastio;

	int T;
	cin >> T;
	for1(t,T){
		int N;	cin>>N;
		int M;	cin>>M;
		vii ratings(N, vi(M+1));
		for0(i,N){
			cin >> ratings[i][0];
		}
		for0(i,N){
			int peak = ratings[i][0];
			for1(i,M){
				int diff;	cin>>diff;
				ratings[i][j] = ratings[i][j-1] + diff;
			}
		}
		
		map<int,vi> rankings

	}
	return 0;
}
