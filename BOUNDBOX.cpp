#include<bits/stdc++.h>
using namespace std;

class Box{
public:
	int rx,ry,lx,ly;

	void newBoxSize(Box &A){
		if(rx < A.rx){
			if(ry < A.ry){
				rx = A.rx;
				ry = A.ry;
			}
			else{
				rx = A.rx;
			}
		}
		else{
			if(ry < A.ry){
				ry = A.ry;
			}
		}

		if(lx > A.lx){
			if(ly > A.ly){
				lx = A.lx;
				ly = A.ly;
			}
			else{
				lx = A.lx;
			}
		}
		else{
			if(ly > A.ly){
				ly = A.ly;
			}
		}
	}

	void printBox(){
		cout << lx << " " << ly << " " << rx << " " << ry <<endl;
	}
};

int main(){
	int T;cin>>T;
	while(T--){
		int n;
		cin >> n;
		Box B;
		char ch;cin>>ch;
		if(ch == 'p'){
			int a,b;
			cin>>a>>b;
			B.rx = B.lx = a;
			B.ry = B.ly = b;
		}
		else if(ch == 'c'){
			int a,b,c;
			cin >> a >> b >> c;
			B.lx = a-c;
			B.rx = a+c;
			B.ly = b-c;
			B.ry = b+c;
		}
		else{
			int a,b,c,d;
			cin >>a>>b>>c>>d;
			if(a<=c){
				if(b<=d){
					B.lx = a;
					B.ly = b;
					B.rx = c;
					B.ry = d;
				}
				else{
					B.lx = a;
					B.ly = d;
					B.rx = c;
					B.ry = b;
				}
			}
			else{
				if(b<=d){
					B.lx = c;
					B.ly = b;
					B.rx = a;
					B.ry = d;
				}
				else{
					B.lx = c;
					B.ly = d;
					B.rx = a;
					B.ry = b;
				}	
			}
		}
		for(int i=1;i<n;i++){
			char c;
			cin >> c;
			if(c=='p'){
				Box P;
				int px,py;cin>>px>>py;
				P.lx = P.rx = px;
				P.ly = P.ry = py;
				B.newBoxSize(P);
			}
			else if(c=='c'){
				int cx,cy,r;
				cin >> cx >> cy >> r;
				Box C;
				C.lx = cx-r;
				C.ly = cy-r;
				C.rx = cx+r;
				C.ry = cy+r;
				B.newBoxSize(C);
			}
			else{
				int a,b,c,d;
				cin >>a>>b>>c>>d;
				Box L;
				if(a<=c){
					if(b<=d){
						L.lx = a;
						L.ly = b;
						L.rx = c;
						L.ry = d;
					}
					else{
						L.lx = a;
						L.ly = d;
						L.rx = c;
						L.ry = b;
					}
				}
				else{
					if(b<=d){
						L.lx = c;
						L.ly = b;
						L.rx = a;
						L.ry = d;
					}
					else{
						L.lx = c;
						L.ly = d;
						L.rx = a;
						L.ry = b;
					}	
				}
				B.newBoxSize(L);
			}
		}
		B.printBox();
	}
	return 0;
}