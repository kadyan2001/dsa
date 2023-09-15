#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    ListNode *next;
    ListNode(int x){
        data=x;
        next=NULL;
    }
};

class Solution{
    public:

    void DeleteNode(ListNode *node){
        node->data=node->next->data;
        node->next=node->next->next;
    }


};