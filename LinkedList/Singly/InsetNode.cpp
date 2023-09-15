#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
        next=next;
    }
};

Node *insertAtfirst(Node* list,int newValue){
    Node* head=new Node(newValue);
    head->data=newValue;
    head->next=list;
    return head;
}