#include <iostream>
#include <cstdlib>
using namespace std;

struct Node{
  int data;
  Node *next;
} *head;
int main(){

  Node *p, *temp;

  p = new Node;
  p -> data = 1;
  p -> next = NULL;

  head = p;
  temp = p;

  p = new Node;
  p -> data = 2;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 3;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 4;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 5;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  int inData, pos = 1;
  cin >> inData;
  temp = head;
  while(temp != NULL){
    if(temp -> data == inData){
        cout << "The data is found at position: " << pos << endl;
        break;
    }
    temp = temp -> next;
    pos++;
    if(temp == NULL){
      cout << "The data is not found in the list\n";
    }
  }

  p = head;
  cout << "The list: ";
  while(p != NULL){
    cout << p -> data << " ";
    p = p -> next;
  }

  return 0;
}