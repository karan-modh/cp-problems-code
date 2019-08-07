#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int x0,y0,r0,x1,y1,r1;
		cin >> x0 >> y0 >> r0 >> x1 >> y1 >> r1;
		double d;
		int ydiff,xdiff,rdiff;
		ydiff = abs(y0-y1);
		xdiff = abs(x0-x1);
		ydiff = pow(ydiff,2);
		xdiff = pow(xdiff,2);
		d = sqrt(xdiff + ydiff);
		rdiff = abs(r0-r1);
		if(d==rdiff){cout << "E" << endl;}
		else if(d<rdiff){cout << "I" << endl;}
		else{cout << "O" << endl;}
	}
	return 0;
}