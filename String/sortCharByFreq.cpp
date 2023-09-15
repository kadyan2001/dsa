#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    static bool cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }

    string freqSort(string s){

        map<char,int> mpp;

        for(auto ch:s){
            mpp[ch]++;
        }

        vector<pair<char,int>> res;

        for(auto it:mpp){
            res.push_back(it);
        }

        sort(res.begin(),res.end(),cmp);

        string out="";

        for(auto it:res){
            int temp=it.second;
            while(temp--){
                out+=it.first;
            }
        }
        return out;
    }
};