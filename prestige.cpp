#include<bits/stdc++.h>
using namespace std;

void flip(int Deck[][2], int size, int start, int end){
	for(int i=0;i<=(end-start);i++){
		int c;
		c = Deck[start+i][0];
		Deck[start+i][0] = Deck[end-i][1];
		Deck[end-i][1] = c;
	}
}

int prestige(int firstDeck[][2],int secondDeck[][2],int size,int A,int B,int C,int D){
	int sum = 0;
	int product;
	for(int i=0;i<=D-C;i++){
		product = firstDeck[C+i][0] * secondDeck[A+i][0];
		sum = sum + product;
	}
	return sum;
}

int main(){
	int N ,M;
	cin >> N >> M;
	int firstDeck[N][2], secondDeck[N][2];
	int i,j;
	
	j=0;
	for(i=0;i<N;i++){
		int k;
		cin >> k;
		secondDeck[i][j] = k;
		firstDeck[i][j] = 1;
	}
	
	j=1;
	for(i=0;i<N;i++){
		int k;
		cin >> k;
		secondDeck[i][j] = k;
		firstDeck[i][j] = -1;
	}

	for(int k=0;k<M;k++){
		int input;
		cin >> input;
		if(input == 1){
			int L,R;
			cin >> L >> R;
			flip(secondDeck,N,L-1,R-1);
		}
		else if(input == 2){
			int K;
			cin >> K;
			flip(firstDeck,N,0,K-1);
		}
		else{
			int A,B,C,D;
			cin >> A>>B>>C>>D;
			int ans = prestige(firstDeck,secondDeck,N,A-1,B-1,C-1,D-1);
			cout << ans <<endl;
		}
	}
	return 0;
}