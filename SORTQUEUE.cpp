#include<bits/stdc++.h> 
using namespace std;

void sortFunc(queue<int> &q, int minIndex){
	int n = q.size();
	int store=q.front();
	for(int i=0;i<n;i++){
		int a = q.front();
		q.pop();
		if(i==minIndex){
			store = a;
		}
		else{
			q.push(a);
		}
	}
	q.push(store);
}

void sortQueue(queue<int> &q){
	int n = q.size();
	for(int i=0;i<n;i++){
		int minIndex = 0;
		int minElement = q.front();
		for(int i=0;i<n;i++){
			int a = q.front();
			if(a<minElement){
				minElement = a;
				minIndex = i;
			}
		}
		sortFunc(q,minIndex);
		n--;
	}
}

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(5);
    q.push(4);
    q.push(21);
    sortQueue(q);
    int n = q.size();
    for(int i=0;i<n;i++){
    	cout << q.front() << " ";
    	q.pop();
    }
    return 0;
}