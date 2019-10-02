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
// void inpVector(vector<T> &v, int n){
// 	for0(i,n){cin>>v[i];}
// }

vi v(10);
void fill(vi &v){
    v[0]=6;
    v[1]=2;
    v[2]=5;
    v[3]=5;
    v[4]=4;
    v[5]=5;
    v[6]=6;
    v[7]=3;
    v[8]=7;
    v[9]=6;
}

int solve(int C){
    int ans=0;
    while(C){
        int a = C%10;
        ans+=v[a];
        C/=10;
    }
    return ans;
}

int main(){
    fill(v);
	int T;
	cin >> T;
	for1(t,T){
        long A;  cin>>A;
        long B;  cin>>B;
        long C = A+B;
        int ans = solve(C);
        cout << ans << endl;
	}
	return 0;
}