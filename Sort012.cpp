#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr,int n){
    int left=0,mid=0,right=n-1;

    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[left],arr[mid]);
            mid++;
            left++;
        }

        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[right]);
            right--;
        }
    }
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
