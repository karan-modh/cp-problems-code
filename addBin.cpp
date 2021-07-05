#include<bits/stdc++.h>
using namespace std;

string addBinary(string A, string B) {
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int n = A.length();
    int m = B.length();
    if(m>n){
        swap(A,B);
        swap(m,n);
    }
    
    // cout << A << " " << B << " " << n << " " << m << endl;
    
    int carry = 0;
    string result = "";
    for(int i=0;i<m;i++){
        int ans = carry + A[i]-'0' + B[i]-'0';
        if(ans == 0){
            result += '0';
            carry = 0;
        }
        if(ans == 1){
            result += '1';
            carry = 0;
        }
        if(ans == 2){
            result += '0';
            carry = 1;
        }
        if(ans == 3){
            result += '1';
            carry = 1;
        }
    }
    if(m==n && carry){
        result += '1';
    }
    else{
        while(m<n && carry){
            cout << "In While Loop" << endl;
            int ans = carry + A[m]-'0';
            if(ans == 0 || ans == 1){
                carry = 0;
                result += '0'+ans;
            }
            else{
                result += '0';
            }
            m++;
        }
        if(!carry){
            while(m<n){
                result += A[m];
                m++;
            }
        }
        if(m==n && carry){
            result += '1';
        }
    }
    reverse(result.begin(),result.end());
    return result;
}


int main(){
    string A,B;
    cin >> A >> B;
    string result = addBinary(A,B);
    cout << result << endl;
    return 0;
}