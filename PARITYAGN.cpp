#include<bits/stdc++.h>
#define M 32
using namespace std;
typedef unsigned long long int ulli;

void fastscan(int &number){bool negative = false;register int c;number = 0;c = getchar();
	if(c == '-'){negative = true;c = getchar();}
	for(;c>=48 && c<=57; c=getchar()){number = number*10 + (c-48);}
	if(negative){number *= -1;}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;fastscan(T);
	while(T--){
		int Q; fastscan(Q);
		set<int> st;
		while(Q--){
			int K;fastscan(K);
			st.insert(K);
			int eve=0;
			int odd=0;
			set<int>::iterator itr;
			if(!st.empty()){
				for(itr = st.begin();itr != st.end();itr++){
					int j = *itr;
					j = K^j;
					if(j){
						st.insert(j);
					}
				}
			}
			for(itr = st.begin();itr != st.end();itr++){
				bitset<M> arr1(*itr);
				if(arr1.count()%2==0){eve++;}
				else{odd++;}
			}
			cout << eve << " " << odd << endl;
		}		
	}
	return 0;
}