#include<bits/stdc++.h>
using namespace std;

class node{
public:
	char data;
	node *next=NULL;
};

class stack_list{
public:
	int size = 0;
	bool isEmpty(){
		if(size==0){return 1;}
		else{return 0;}
	}
	node *head = new node;
	void push(char a){
		if(isEmpty()){
			head->data = a;
			head->next = NULL;
			size++;
		}
		else{
			node *temp = new node;
			temp->data = a;
			temp->next = head;
			head = temp;
			size++;
		}
	}
	char pop(){
		char b;
		node *temp = head;
		head = head->next;
		temp->next = NULL;
		b = temp->data;
		free(temp);
		return b;
	}
	
	void display_stack(){
		node *temp = head;
		while(temp!=NULL){
			cout << temp->data;
			temp = temp->next;
		}
		cout << "\n";
	}

};

class queue_list{
public:
	int size = 0;
	bool isEmpty(){
		if(size==0){return 1;}
		else{return 0;}
	}
	node *head = new node;
	void enqueue(char a){
		if(isEmpty()){
			head->data = a;
			head->next = NULL;
			size++;
		}
		else{
			node *temp = head;
			while(temp->next!=NULL){
				temp = temp->next;
			}
			temp->next = new node;
			temp = temp->next;
			temp->data = a;
			temp->next = NULL;
			size++;
		}
	}

	char dequeue(){
		char b;
		node *temp = head;
		head = head->next;
		temp->next = NULL;
		b = temp->data;
		free(temp);
		return b;
	}

	void display_queue(){
		node *temp = head;
		while(temp!=NULL){
			cout << temp->data;
			temp = temp->next;
		}
		cout << "\n";
	}
};

int main(){
	stack_list list1;
	queue_list list2;
	string word;
	cin >> word;
	int n = word.length();
	char b,c;
	char chars[n+1];
	int flag = 0;
	strcpy(chars, word.c_str());
	for(int i=0;i<n;i++){
		list1.push(chars[i]);
		list2.enqueue(chars[i]);
	}
	for(int i=0;i<n;i++){
		b = list1.pop();
		c = list2.dequeue();
		if(b==c){flag = 1;}
		else{flag = 0;break;}
	}
	if(flag == 1){
		cout << "The word, " << word << ", is a palindrome.";
	}
	else{
		cout << "The word, " << word << ", is not a palindrome.";
	}
	return 0;
}