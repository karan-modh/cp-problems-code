#include<bits/stdc++.h>
using namespace std;

void perform(int A,int B){
    int C = A-B;
    if(C%10 == 9){C-=1;}
    else{C+=1;}
    cout << C << endl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int A;
	cin >> A;
	int B;
	cin >> B;
	perform(A,B);
	return 0;
}