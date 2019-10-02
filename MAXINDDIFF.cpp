#include<bits/stdc++.h>

using namespace std;



int maxDiff(vector<int> &a,int n){
    unordered_map<int,vector<int> > m;
    for(int i=0;i<n;i++){
        if(m.find(a[i])!=m.end()){
            m[a[i]].push_back(i);
        }
        else{
            vector<int> v1;
            v1.clear();
            v1.push_back(i);
            m.insert({a[i],v1});
        }
    }

    sort(a.begin(),a.end());
    // for(int i=0;i<n;i++){
    //     cout << a[i] << " ";
    // }
    cout << endl;
    int ans = 0;
    int temp = n;
    for(int i=0;i<n;i++){
        if(temp>m[a[i]][0]){
            temp = m[a[i]][0];
        }
        ans = max(ans,m[a[i]][m[a[i]].size()-1]-temp);
        cout << ans << " ";
    }
    cout << endl;
    return ans;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << maxDiff(v,n) << endl;
    return 0;
}