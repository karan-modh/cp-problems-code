// Problem Statement
/*

You are a teacher in reputed school.
During Celebration Day you were assigned a task to distribute Cadbury such that maximum children get the chocolate.
You have a box full of Cadbury with different width and height.
You can only distribute largest square shape Cadbury.
So if you have a Cadbury of length 10 and width 5, then you need to break Cadbury in 5X5 square and distribute to first child and then remaining 5X5 to next in queue


Input Format:
First line contains an integer P that denotes minimum length of Cadbury in the box
Second line contains an integer Q that denotes maximum length of Cadbury in the box
Third line contains an integer R that denotes minimum width of Cadbury in the box
Fourth line contains an integer S that denotes maximum width of Cadbury in the box

Output Formate:
Print total number of children who will get chocolate.

Testcase 1:
Input: 5 7 3 4
Output: 24
Explanation:
Length is in between 5 to 7 and width is in between 3 to 4.
So we have 5X3,5X4,6X3,6X4,7X3,7X4 type of Cadbury in the box.

If we take 5X3 :
First, we can give 3X3 square Cadbury to 1st child .Then we are left with 3X2. Now largest square is 2X2 which will be given to next child. Next, we are left with two  1X1 part of Cadbury which will be given to another two children.
And so on
*/

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
	fastio;

	int minL;	cin >> minL;
	int maxL;	cin >> maxL;
	int minW;	cin >> minW;
	int maxW;	cin >> maxW;

	vector<vector<int>> dp(maxL+1, vector<int>(maxW+1));
	for0(i,maxL+1){
		for0(j,maxW+1){
			if(i==0 || j==0){
				dp[i][j] = 0;
			}
			else if(i==j){
				dp[i][j] = 1;
			}
			else if(j>i){
				dp[i][j] = 1 + dp[i][j-i];
			}
			else{
				dp[i][j] = 1 + dp[i-j][j];
			}
		}
	}

	int ans = 0;
	for(int i=minL;i<=maxL;i++){
		for(int j=minW;j<=maxW;j++){
			ans += dp[i][j]; 
		}
	}

	cout << ans << endl;
	return 0;
}
