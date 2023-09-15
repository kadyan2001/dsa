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
    /* data */
};

Node *reverseDLL(Node* head){
    if(head==NULL){
        return head;
    }

    Node* temp=NULL;

    while(head->next!=NULL){
        temp=head;
        head=head->next;
        swap(temp->next,temp->prev);
    }

    return temp;
}


Node* reverseDLL(Node* head){
    if(head==NULL){
        return head;
    }

    Node* temp=NULL;
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp;
        prev=curr;
        curr=temp;
    }
    return prev;
}
