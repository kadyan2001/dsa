#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
    Node* prev;

    Node(int x)
{
    data=x;
    next=NULL;
    prev=NULL;
}
};

Node* deleteLastNode(Node* head){
    if(head->next==NULL){
        return NULL;
    }

    Node* temp=head;
    Node* pre=NULL;

    while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
    }
    pre->next=NULL;

    return head;
}