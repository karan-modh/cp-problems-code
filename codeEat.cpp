#include<bits/stdc++.h>
using namespace std;

bool checkDay(vector<int> &C,vector<int> &E,int A,int B){
    int minc=INT_MAX,mine=INT_MAX;
    for(int i=0;i<C.size();i++){
        minc = min(minc,C[i]);
        mine = min(mine,E[i]);
    }
    if(A<minc && B<mine){
        return 1;
    }
    

}

int main(){
    int T;
    cin >> T;
    for(int t = 1;t <= T;t++){
        int nDays;
        int nSlots;
        cin >> nDays >> nSlots;
        vector<int> C(nSlots);
        vector<int> E(nSlots);
        for(int i=0;i<nSlots;i++){
            cin >> C[i] >> E[i];
        }
        string result;
        for(int i=0;i<nDays;i++){
            int A,B;
            cin >> A >> B;
            bool sol;
            sol = checkDay(C,E,A,B);
            if(sol){
                result += "Y";
            }
            else{
                result += "N";
            }
        }
        cout << "Case #" << t << ": " << result << endl;
    }
    return 0;
}