#include<bits/stdc++.h>
using namespace std;
//Brute
bool sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                return false;

            }
        }
    }

    return true;
}

//optimal

bool sort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }

    return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;
  bool ans = sort(arr, n);
  if (ans) cout << "True" << endl;
  else cout << "False" << endl;
  return 0;
}