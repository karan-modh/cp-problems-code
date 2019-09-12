/*
        The following program takes two ints as input and reverses them
        Generates another int as sum of two reversed ints
        Reverses the sum and returns it as output.
*/

#include<bits/stdc++.h>
using namespace std;

int reverse(int A){
    int Ar=0;
    while(A){
        Ar = Ar*10 + A%10;
        A = A/10;
    }
    return Ar;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int A,B;
        cin >> A >> B;
        int Ar = reverse(A);
        int Br = reverse(B);
        int C = Ar + Br;
        int Cr = reverse(C);
        cout << Cr << endl;
    }
    return 0;
}