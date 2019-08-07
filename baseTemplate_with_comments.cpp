#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ulli;	// custom type declaration

void fastscan(int &number){
	
	bool negative = false;				// variable to indicate the sign of the input

	register int c;						// variable to store the character
	number = 0;							// initialize number as zero(0)

	// read a character as input from buffer
	c = getchar();
	if(c == '-'){
		negative = true;				// set negative true
		c = getchar();					// scan next character from input
	}

	// scan the whole input and generate the number
	for(;c>=48 && c<=57; c=getchar()){
		number = number*10 + (c-48);
	}

	// if the input is negative then negate the number
	if(negative){number *= -1;}

}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;								// declare T for Testcases
	fastscan(T);						// use the fastscan method to input a integer

	// loop to run for all Testcases
	while(T--){
		
	}
	return 0;
}