#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int romantoInt(string s){
        unordered_map<char,int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int ans;

        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i]]){
                ans-=mp[s[i]];
            }
            else{
                ans+=mp[s[i]];
            }
        }
        return ans;

    }
};