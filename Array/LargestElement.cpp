#include<bits/stdc++.h>
using namespace std;


// int sort(vector<int> arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }

int largestElement(int arr[],int n){
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main() {
   // vector<int> arr1={2,5,1,3,0};
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = largestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = largestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}