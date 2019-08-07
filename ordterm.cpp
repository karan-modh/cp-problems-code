#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int S1[3],S2[3],S3[3];
		for(int i=0;i<3;i++){
			cin >> S1[i];
		}
		for(int i=0;i<3;i++){
			cin >> S2[i];
		}
		for(int i=0;i<3;i++){
			cin >> S3[i];
		}
		int j[3];
		int C1=0,C2=0;
		
			for(int i=0;i<3;i++){
				if(S1[i]==S2[i]){C1++;C2++;}
				else if(S1[i]>S2[i]){C1++;}
				else{C2++;}
			}	
		
		
		if(C1==3 && C2==3){
			j[0]=0;
		}
		else if(C1!=3 && C2!=3){
			j[0]=0;
		}
		else{j[0]=1;}
		
			for(int i=0;i<3;i++){
				if(S2[i]==S3[i]){C1++;C2++;}
				else if(S2[i]>S3[i]){C1++;}
				else{C2++;}
			}	
		
		
		if(C1==3 && C2==3){
			j[1]=0;
		}
		else if(C1!=3 && C2!=3){
			j[1]=0;
		}
		else{j[1]=1;}

				for(int i=0;i<3;i++){
				if(S1[i]==S3[i]){C1++;C2++;}
				else if(S1[i]>S3[i]){C1++;}
				else{C2++;}
			}	
		
		
		if(C1==3 && C2==3){
			j[2]=0;
		}
		else if(C1!=3 && C2!=3){
			j[2]=0;
		}
		else{j[2]=1;}
		
		int flag=0;
		for(int i=0;i<3;i++){
			if(j[i]==0){
				flag=1;
			}
		}
		if(flag==1){
			cout << "yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}