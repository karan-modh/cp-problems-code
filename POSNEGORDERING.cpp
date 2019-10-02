#include <bits/stdc++.h>
#define M 1000000007
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define for0(i,N) for(int i=0;i<N;i++)
#define for1(i,N) for(int i=0;i<=N;i++)
#define rfor0(i,N) for(int i=N-1;i>=0;i--)
#define rfor1(i,N) for(int i=N;i>=1;i--)

using namespace std;

template <class T>
void inputVec(vector<T> &V,int N){
	for(int i=0;i<N;i++){
		T a;
		cin >> a;
		V[i] = a;
	}
}

void solve(vi &arr, int N){
    int bp=0;
    for0(i,N){
        if(arr[i]<0){
            int temp = arr[i];
            arr.erase(arr.begin()+i);
            arr.insert(arr.begin()+bp,temp);
            bp++;
        }
    }
    for0(i,N){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin >> T;
	vi arr(T);
	inputVec(arr,T);
	solve(arr,T);
	return 0;
}
