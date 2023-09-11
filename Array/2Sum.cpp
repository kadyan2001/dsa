#include<bits/stdc++.h>
using namespace std;

vector<int> two_sum(int n,vector<int> &arr,int target){
    vector<int> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
}


//Optimal two-pointer approach

string twosum(int n,vector<int> &arr,int target){
    sort(arr.begin(),arr.end());
    int left=0, right=n-1;

    while(left<=right){
        int sum=arr[left]+arr[right];

        if(sum==target){
            return "YES";
        }

        else if(sum<target) left++;
        else{
            right--;
        }
    } 
    return "NO";
}