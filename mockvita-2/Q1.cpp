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

template <typename T>
void printVector(vector<T> &v){
	int n = v.size();
	for0(i,n){ cout<<v[i]<< " "; }
	cout << endl;
}

template <typename T>
void inpVector(vector<T> &v, int n){
	for0(i,n){cin>>v[i];}
}

int main(){

	int N;	cin>>N;
	vector<char> brideToBe(N);
	inpVector(brideToBe, N);
	vector<char> groomToBe(N);
	inpVector(groomToBe, N);

	// cout << "\nBrides" << endl;
	// printVector(brideToBe);
	// cout << "Grooms" << endl;
	// printVector(groomToBe);

	stack<char> brides;
	rfor0(i,N){
		brides.push(brideToBe[i]);
	}

	queue<char> grooms;
	for0(i,N){
		grooms.push(groomToBe[i]);
	}

	while(!brides.empty()){
		int count = 0;
		int sz = grooms.size();
		while(brides.top() != grooms.front() && count != sz){
			char c = grooms.front();
			grooms.pop();
			grooms.push(c);
			count++;
		}
		if(count == sz){
			cout << brides.size() << endl;
			return 0;
		}
		else{
			brides.pop();
			grooms.pop();
		}
	}

	cout << 0 << endl;
	return 0;
}
