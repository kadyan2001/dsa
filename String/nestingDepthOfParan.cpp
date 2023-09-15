#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int maxDepth(string s){
        int depth=0,open=0;

        for(auto ch:s){
            if(ch=='(') open++;
            if(ch==')') open--;

            depth=max(depth,open);
        }
    return depth;
    }

};