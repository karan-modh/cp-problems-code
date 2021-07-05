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

// typedef template<T>
// void printVector(vector<T> &v){
// 	int n = v.size();
// 	for0(i,n){ cout<<v[i]<< " "; }
// 	cout << endl;
// }

// typedef template<T>
// void inpVector(vector<T> &v, int n){
// 	for0(i,n){cin>>v[i];}
// }

int main(){

	int T;
	cin >> T;
	for1(t,T){
		string s;	cin>>s;
		int n = s.length();
		vector<vector<int>> dp(n, vector<int>(n));
		int maxi = 1;
		int start = 0;
		int end = 0;
		for0(i,n){
			for(int j=0;j<=i;j++){
				if(i==j){
					dp[i][j] = 1;
				}
				else{
					dp[i][j] = 0;
				}
			}
		}

		for(int j=1;j<n;j++){
			for(int i=0;i<j;i++){
				if(s[i] == s[j]){
					if(j-i == 1){
						dp[i][j] = 2;
						maxi = max(dp[i][j], maxi);
						start = i;
						end = j;
						continue;
					}
					else if(dp[i+1][j-1] != 0){
						dp[i][j] = dp[i+1][j-1] + 2;
						maxi = max(dp[i][j], maxi);
						start = i;
						end = j;
						continue;
					}
				}
				dp[i][j] = 0;
			}
		}
		
		// for0(i,n){
		// 	for0(j,n){
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }

		cout << maxi << endl;
		for(int i=start;i<=end;i++){
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
