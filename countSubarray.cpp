#include<bits/stdc++.h>
using namespace std;

int findAllSubarraywithGivenSum(vector<int> &arr,int k){
    int n=arr.size();
    int cnt=0,preSum=0;
    map<int,int> mpp;

    mpp[0]=1;

    for(int i=0;i<n;i++){
        preSum+=arr[i];

        int remove=preSum-k;

        cnt+=mpp[remove];

        mpp[preSum]+=1;

    }
    return cnt;
}

int main()
{
    vector arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraywithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
