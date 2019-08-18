#include<bits/stdc++.h>
using namespace std;

vector<int> perform(vector<int> &A){
    long long maxLength=0;
    long long maxSum=0;
    int start=0;
    for(int i=0;i<A.size();i++){
        int tempS = A.size();
        long long sub_sum = 0;
        int j=0;
        int length=0;
        while(i<A.size() && A[i]>=0){
            if(j==0){tempS=i;j++;}
            sub_sum += A[i];
            i++;
            length++;
        }
        if(sub_sum > maxSum){
            maxLength = length;
            maxSum = sub_sum;
            start=tempS;
        }
        else if(sub_sum == maxSum){
            if(length > maxLength){
                maxLength = length;
                start=tempS;
            }
        }
    }
    int n = start-1+maxLength;
    vector<int> sol;
    for(int i=start;i<=n;i++){
        sol.push_back(A[i]);
    }
    return sol;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    vector<int> sol = perform(A);
    
    for(int i=0;i<sol.size();i++){
        cout << sol[i] << " ";
    }
    return 0;
}