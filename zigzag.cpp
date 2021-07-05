#include<bits/stdc++.h>
using namespace std;

string convert(string A, int B) {
    int n = A.length();
    map<int, string> m;
    int k = 1;
    bool down = true;
    for(int i=0;i<n;i++){
        m[k] += A[i];
        if(k==B){
            down = false;
        }
        if(k==1){
            down = true;
        }
        if(down){
            k++;
        }
        else{
            k--;
        }
        
    }
    
    string result = "";
    for(int i=1;i<=B;i++){
        result += m[i];
    }
    return result;
}


int main(){
	string A;	cin >> A;
	int B;	cin >> B;
	cout << convert(A,B) << endl;
	return 0;
}