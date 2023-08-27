#include<bits/stdc++.h>
using namespace std;

long long maxSubarray(int arr[],int n){
    long long maxi=LONG_MIN;
    long long sum=0;


    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    return maxi;
}

int maxSubarraySum(int arr[],int n){
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){

            sum+=arr[j];

            maxi=max(maxi,sum);
        }
    }
    return maxi;
}