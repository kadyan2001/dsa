#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
    int data;
     Node* next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node* next) : data(x),next(next) {}
};

Node* constructLL(vector<int> &arr){
    Node* temp=new Node();
    Node* head=temp;

    for (int i=0;i<arr.size();i++){
        temp->data=arr[i];
        if(i<(arr.size()-1)){
            temp->next=new Node();
            temp=temp->next;
        }
    }
    return head;

}