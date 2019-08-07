#include<bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int a,b,c;
		cin >> a >> b >> c;
		if(a==0 && b==0 && c==0){break;}
		if((b-a) == (c-b)){
			int d = b-a;
			cout << "AP " << c+d << endl;
		}
		else{
			int r = b/a;
			cout << "GP " << c*r << endl;
		}
	}
	return 0;
}