#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
        int N;
        cin >> N;
        vector<int> S(N);
        for(int i=0;i<N;i++){
            int b;cin >> b;
            S[i] = b;
        }
        sort(S.begin(),S.end());
        int min = S[1]-S[0];
        for(int i=1;i<N;i++){
            int a = S[i]-S[i-1];
            if(a<min){min = a;}
        }
        cout << min << endl;
	}
	return 0;
}