#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;	cin >> T;
	while(T--){
		int k;	cin >> k;
		vector<vector<char>> board(8, vector<char>(8));
		int count = 0;
		int Xcount = 0;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(count == k && Xcount != 9){
					board[i][j] = 'X';	
					Xcount++;
				}
				else{
					board[i][j] = '.';
					count++;	
				}
			}
		}
		board[0][0] = 'O';

		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout << board[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}