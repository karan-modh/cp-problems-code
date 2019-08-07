#include<bits/stdc++.h>

using namespace std;

class Box{
private:
    int l,b,h;

public:
    Box(){l=0;b=0;h=0;}
    Box(int a,int br,int c){l=a;b=br;h=c;}
    Box(const Box &B1){l=B1.l;b=B1.b;h=B1.h;}

    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    unsigned long long CalculateVolume(){return l*b*h;}

    friend bool operator < (const Box &A,const Box &B);
    friend ostream& operator<< (ostream &out,const Box& B);

};
bool operator<(const Box &A,const Box &B){
    if(A.l<B.l){return true;}
    else if(A.b<B.b && A.l==B.l){return true;}
    else if(A.h<B.h && A.l==B.l && A.b==B.b){return true;}
    else{return false;}
}
ostream& operator << (ostream &out,const Box& B){
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}