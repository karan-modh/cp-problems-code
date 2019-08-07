
#include <iostream>

using namespace std;

class node {
public:
  char data;
  node *next = NULL;
};

class Solution {
public:
  int size = 0;
  bool isEmpty() {
    if (size == 0) {
      return 1;
    } else {
      return 0;
    }
  }
  node *head = new node;
  void pushCharacter(char a) {
    if (isEmpty()) {
      head->data = a;
      head->next = NULL;
      size++;
    } else {
      node *temp = new node;
      temp->data = a;
      temp->next = head;
      head = temp;
      size++;
    }
  }
  char popCharacter() {
    char b;
    node *temp = head;
    head = head->next;
    temp->next = NULL;
    b = temp->data;
    free(temp);
    return b;
  }
  void enqueueCharacter(char a){
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
    char dequeueCharacter(){
        char b;
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        b = temp->data;
        free(temp);
        return b;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}