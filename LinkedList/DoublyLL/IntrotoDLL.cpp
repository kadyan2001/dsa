#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node* constructDLL(vector<int> &arr){
    Node* head=new Node(arr[0]);

    Node* temp1=head;

    for(int i=1;i<arr.size();i++){
        Node* temp2=new Node(arr[i]);

        temp2->prev=temp1;
        temp1->next=temp2;

        temp1=temp2;
    }

    return head;
}