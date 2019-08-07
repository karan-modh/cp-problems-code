#include<bits/stdc++.h>
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

	}
	return 0;
}