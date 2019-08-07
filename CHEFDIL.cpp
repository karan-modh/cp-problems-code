#include<bits/stdc++.h>
using namespace std;

template <class T>
void inputVec(vector<T> &V,int N){
	for(int i=0;i<N;i++){
		T a;
		cin >> a;
		V[i] = a;
	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		string V;
		cin >> V;
		int N = V.length();
		vector<int> face(N);
		int face_sum=0;
		for(int i=0;i<N;i++){face[i] = int(V[i]-'0');face_sum+=face[i];}
		
		while(face_sum!=(2*N)){
			int i=0;
			while(face[i]!=1 && i<N){i++;}
			if(i==N){
				break;
			}
			else{
				face_sum += 1;
				face[i] = 2;
				switch(i){
					case 0:
				}
				// if(i>0 && i<N-1){
					
				// 	if(face[i-1]==2){}
				// 	else if(face[i-1] == 0){face[i-1] = 1;face_sum+=1;}
				// 	else{face[i-1] = 0;face_sum -= 1;}

				// 	if(face[i+1]==2){}
				// 	else if(face[i+1] == 0){face[i+1] = 1;face_sum+=1;}
				// 	else{face[i+1] = 0;face_sum -= 1;}
				// }
				// else if(i==0){
				// 	if(face[i+1]==2){}
				// 	else if(face[i+1] == 0){face[i+1] = 1;face_sum+=1;}
				// 	else{face[i+1] = 0;face_sum -= 1;}
				// }
				// else{
				// 	if(face[i-1]==2){}
				// 	else if(face[i-1] == 0){face[i-1] = 1;face_sum+=1;}
				// 	else{face[i-1] = 0;face_sum -= 1;}
				// }
			}
		}
		if(face_sum == 2*N){cout << "WIN" << endl;}
		else{cout << "LOSE" << endl;}
	}	
	return 0;
}