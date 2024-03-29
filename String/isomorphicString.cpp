#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    bool isIsomorphic(string s,string t){
        if(s.length()!=t.length()){
            return false;
        }

        map<char,char> mpp,mpp2;

        for(int i=0;i<s.length();i++){
            if(mpp[s[i]] && mpp[s[i]]!=t[i]) return false;
            if(mpp2[t[i]] && mpp2[t[i]]!=s[i]) return false;

            mpp[s[i]]=t[i];
            mpp2[t[i]]=s[i];
        }
        return true;
    }
};