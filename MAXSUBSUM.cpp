#include<bits/stdc++.h>
using namespace std;

int maxsubsum(vector<int> &A){
    int n = A.size();
    int max_here=0;
    int overall_max=0;
    for(int i=0;i<n;i++){
        max_here += A[i];
        if(max_here <0){max_here = 0;}
        if(overall_max < max_here){overall_max = max_here;}
    }
    return overall_max;
}

int main(){
    int N;
    cin >> N;
    vector<int> Arr(N);
    for(int i=0;i<N;i++){
        cin >> Arr[i];
    }

    int ans = maxsubsum(Arr);
    cout << "\n" << ans << endl;
    return 0;
}