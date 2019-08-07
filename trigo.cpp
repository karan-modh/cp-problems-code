#include<bits/stdc++.h>
using namespace std;

int main(){
	int b;
	int a;
	cout << "Enter the value of A : ";
	cin >> a;
	cout << "\nEnter the value of B : ";
	cin >> b; 
	cout << endl;
	float c = float(b)/float(a);
	float d = atan(c);
	d = d*57.296;
	cout << "The value of Theta is " << d;
}