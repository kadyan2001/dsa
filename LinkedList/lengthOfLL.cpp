#include<bits/stdc++.h>
using namespace std;


    struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL) {}
};


class Solution{
    public:

    int length(ListNode *head){
        if(head==NULL){
            return 0;
        }

        int len=length(head->next);
        return 1+len;
    }

};