#include<bits/stdc++.h>
using namespace std;


int LongestSubarray(vector<int> &a,long long k){
    int n=a.size();

    int left=0,right=0;
    int max_len=0;
    int sum=0;

    while(right<n){

        while(left<=right &&  sum>k){
            sum-=a[left];
            left++;
        }

        if(sum==k){
            max_len=max(max_len,right-left+1);
        }

        right++;

        if(right<n){
            sum+=a[right];
        }
    }
    return max_len;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = LongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

