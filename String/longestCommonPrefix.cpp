#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    string longestPrefix(vector<string> &strs){

        string ans="";
        int n=strs.size();

        sort(strs.begin(),strs.end());

        string first=strs[0];
        string last=strs[n-1];

        for(int i=0;i<first.size();i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans.push_back(first[i]);
        }

        return ans;
    }
};