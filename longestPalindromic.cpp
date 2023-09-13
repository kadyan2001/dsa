#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    string longestPalindrome(string s){
        if(s.length()<=0) return s;

        int n=s.length();
        int max_len=1;
        int start=0,end=0;

        // for odd len

        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            int len=r-l-1;
            if(len>max_len){
                max_len=len;
                start=l+1;
                end=r-1;
            }
        }


        //for even length

        for(int i=0;i<n;i++){
            int l=i,r=i+1;

            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            int len=r-l-1;
            if(len>max_len){
                max_len=len;
                start=l+1;
                end=r-1;
            }
        }

        return s.substr(start,max_len);
    }
};


 