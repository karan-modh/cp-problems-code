#include<bits/stdc++.h>
using namespace std;

int findCount(string s){
	vector<char> v;
	for(int i=0;i<s.length();i++){
		v.push_back(s[i]);
	}
	
}

int main(){
	string s;
	cin >> s;
	while(s != '0'){
		int count = 0;
		count = findCount(s);
		cout << count << endl;
		cin >> s;
	}
	return 0;
}