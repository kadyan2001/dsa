#include<bits/stdc++.h>
using namespace std;

int max_profit(vector<int> &arr){
    int maxi=0;
    int n=arr.size();
    int min_price=INT_MAX;

    for(int i=0;i<arr.size();i++){
        min_price=min(min_price,arr[i]);
        maxi=max(maxi,arr[i]-min_price);
    }

    return maxi;
}