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

int main(){
    fastio;
	int T;
	cin >> T;
	for1(t,T){
        long A;  cin>>A;
        long B;  cin>>B;
        long C;  cin>>C;
        long D = A + 2*B + 3*C;
        if(D%2==1){
            cout << "NO" << endl;
        }
        else{
            if(A%2==0 && B%2==0 && C%2==0){
                cout << "YES" << endl;
                continue;
            }
            int mid = D/2;
            int c = mid/3;
            if(c<C){
                c=mid-c*3;
                if(c==1){
                    if(A!=0){
                        cout << "YES" << endl;
                    }
                    else{
                        cout << "NO" << endl;
                    }
                }
                else if(c==2){
                    if(B!=0){
                        cout << "YES" << endl;
                    }
                    else{
                        if(A>2){
                            cout << "YES" << endl;
                        }
                        else{
                            cout << "NO" << endl;
                        }
                    }
                }
                else{
                    cout << "YES" << endl;
                }
            }
            else{
                c=C;
                c=mid-c*3;
                int b = c/2;
                if(b<B){
                    b = c-c*2;
                    if(b==1 && A!=0){
                        cout << "YES" << endl;
                    }
                    else if(b==0){
                        cout << "YES" << endl;
                    }
                    else{
                        cout << "NO" << endl;
                    }
                }
                else{
                    b=B;
                    b=c-b*2;
                    int a = b;
                    if(a<A){
                        cout << "YES" << endl;
                    }
                    else{
                        cout << "NO" << endl;
                    }
                }
            }
        }
	}
	return 0;
}