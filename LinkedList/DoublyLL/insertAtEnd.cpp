#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node* insertAtTail(Node* head,int k){
    Node* t=new Node(k);

    Node* temp=head;

    if(head==NULL){
        head=t;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=t;
    }
    return head;
}
