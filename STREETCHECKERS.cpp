#include<bits/stdc++.h>
using namespace std;

bool findAns(int X){
    int AliceOdd = 0;
    int BobEven = 0;
    for(int i=1;i<=sqrt(X);i++){
        if(X%i==0){
            if(X/i==i){
                if(i%2==0){
                    BobEven++;
                }
                else{
                    AliceOdd++;
                }
            }
            else{
                if(i%2==0){
                    BobEven++;
                }
                else{
                    AliceOdd++;
                }
                if((X/i)%2==0){
                    BobEven++;
                }
                else{
                    AliceOdd++;
                }
            }
        }
    }
    if(abs(AliceOdd-BobEven) <= 2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int T;
    cin >> T;
    for(int t=1;t<=T;t++){
        int L,R;
        cin >> L >> R;
        int count=0;
        for(int i=L;i<=R;i++){
            if(findAns(i)){
                count++;
            }
        }
        cout << "Case #" << t << ": " << count << endl;
    }
    
    return 0;
}