#include<bits/stdc++.h>
using namespace std;

vector<int> addOne(vector<int> A){
	A.sort(A.begin(),A.end());
	int i = A.size() - 1;
	do{
		A[i]++;
		if(A[i]==0){i--;}
		else{break;}
	}while(true);
	while(true){
		if(A.front() == 0){A.pop_front();}
		else
	}
}

void printArray(vector<int> A){
	vector<int> B = addOne(&A);
	for(int i=0;i<B.size();i++){
		cout << B[i] << " "
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	printArray(&A);
	return 0;
}