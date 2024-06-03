#include <iostream>
using namespace std;

//Creating a class node as done in the earlier code
class Node{
  public:
    int data;
    Node* next;

    Node () {
     data = 0;
     next = NULL;
    }

    Node (int data) {
    this->data = data;
    next = NULL;
   }
};

//Insert at Tail
void insertatTail(Node* &tail , int data) {
  //Step 1
  Node* newnode = new Node(data);
  //Step 2
    tail -> next = newnode;
  //Step 3
  tail = newnode;

}


//Print function as use din previous code
void print ( Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
  temp = temp->next;
  }
}

int main() {
  Node* head;
  head = new Node(10);
  
  Node* tail;
  tail = head;
  
  // Tail 
  insertatTail(tail, 20);
  insertatTail(tail, 30);
  insertatTail(tail, 40);
  insertatTail(tail, 50);
  insertatTail(tail, 60);
  insertatTail(tail, 70);

  print(head);

}