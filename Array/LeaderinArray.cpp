//the element which is greater than the right half of an element
#include<bits/stdc++.h>
using namespace std;

vector<int> leader(int arr[],int n){

    vector<int> ans;

    int max=arr[n-1];
    ans.push_back(arr[n-1]);


    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }

    return ans;

}
