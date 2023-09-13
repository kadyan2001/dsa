#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int res(unordered_map<char,int> &mpp){
        int mf=-1;
        int lf=INT_MAX;
        for(auto &it:mpp){
            mf=max(mf,it.second);
        
            if(it.second>=1){
            lf=min(lf,it.second);
            }
        }
        return mf-lf;
    }
        int beautySum(string s){
            int ans=0;
            int n=s.length();
            for(int i=0;i<n;i++){
                unordered_map<char,int> mpp;
                for(int j=i;j<n;j++){
                    mpp[s[j]]++;
                    ans=ans+res(mpp);
                }
            }
            return ans;
    }
};