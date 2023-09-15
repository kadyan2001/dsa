#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    bool validAnagram(string s,string t){

        if(s.length()!=t.length()){
            return false;
        }

        unordered_map<char,int> count;

        for(auto x:s){
            count[x]++;
        }

        for(auto x:t){
            count[x]--;
        }

        for(auto x:count){
            if(x.second!=0){
                return false;
            }
        }
        return true;

    }
};