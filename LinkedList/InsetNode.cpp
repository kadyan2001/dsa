#include<bits/stdc++.h>
using namespace std;

class Node {
 
  public:
      int data;
      Node* next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node* next) : data(x), next(next) {}
};

Node* insertAtfirst(Node* list,int newValue){
    Node* head=new Node();
    head->data=newValue;
    head->next=list;
    return head;
}