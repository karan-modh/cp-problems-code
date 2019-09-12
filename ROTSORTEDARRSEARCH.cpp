// Rotated Sorted Array findElement 
// Two pointer + Binary findElement approach
#include<bits/stdc++.h>
using namespace std;

int findElement(vector<int> &arr, int l, int h, int key){
    if (l > h) return -1; 
  
    int mid = (l+h)/2; 
    if (arr[mid] == key) return mid; 
  
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid]) 
    { 
        /* As this subarray is sorted, we can quickly 
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid]) 
        return findElement(arr, l, mid-1, key); 
         /*If key not lies in first half subarray,  
           Divide other half  into two subarrays, 
           such that we can quickly check if key lies  
           in other half */
        return findElement(arr, mid+1, h, key); 
    } 
  
    /* If arr[l..mid] first subarray is not sorted, then arr[mid... h] 
    must be sorted subarray */
    if (key >= arr[mid] && key <= arr[h]) 
        return findElement(arr, mid+1, h, key); 
  
    return findElement(arr, l, mid-1, key);
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int B;
    cin >> B;
    if(findElement(A,0,A.size()-1,B) == -1){
        cout << "0";
    }
    else{
        cout << "1";
    }
    return 0;
}