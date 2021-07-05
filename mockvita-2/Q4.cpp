// Problem Statement
/*

A big group of students, starting a long journey on different set of vehicles need to fill petrol in their vehicles.

As group leader you are required to minimize the time they spend at the petrol pump to start the journey at the earliest.
You will be given the quantity of petrol (in litres) that can be filled in each vehicle. There are two petrol vending machines at the petrol pump.
You need to arrange the vehicles in such a way that they take shortest possible time to fill all the vehicles and provide the time taken in seconds as output.
Machine vends petrol @ 1litre/second.

Assume that there is no time lost between switching vehicles to start filling petrol.

Test Case 1:
Input: 1 2 3 4 5 10 11 3 6 16
Output : 31
Explanation : Pump-1 - 16 6 4 3 2  ----> 31 secs
			  Pump-2 - 11 10 5 3 1 ----> 30 secs

Test Case 2:
Input : 25 30 35 20 90 110 45 70 80 12 30 35 85
Output : 335 
Explanation : Pump-1 - 80 45 35 30 25 12 85 20  ----> 332 secs
			  Pump-2 - 90 70 35 30 110			----> 335 secs
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

	vi v;
	while(cin){
		int a;	cin >> a;
		v.push_back(a);
	}
	v.pop_back();
	sort(v.begin(),v.end(),greater<int>());
	int total = sum(v.begin(), v.end());

	int pump1 = v[0];
	int pump2 = v[1];
	for(int i=2;i<v.size();i++){
		if(pump1 < pump2){
			pump1 += v[i];
		}
		else{
			pump2 += v[i];
		}
	}

	cout << pump1 << " " << pump2 << endl;
	// printVector(v);
	return 0;
}
