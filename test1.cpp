#include<iostream>
using namespace std;
int main(){
	int T,chapters;
	int day[7];
	cin >> T;
	for(int i=0;i<T;i++){
		cin >> chapters;
		int sum=0;
		for(int j=0;j<7;j++){
			cin >> day[i];
			sum += day[i];
			if(sum>=chapters){
				if(j==0)
					cout << "Monday" << endl;
				else if(j==1)
					cout << "Tuesday" << endl;
				else if(j==2)
					cout << "Wednesday" << endl;
				else if(j==3)
					cout << "Thursday" << endl;
				else if(j==4)
					cout << "Friday" << endl;
				else if(j==5)
					cout << "Saturday" << endl;
				else
					cout << "Sunday" << endl;
				
				break;
			}
		}
	}
	return 0;
}
