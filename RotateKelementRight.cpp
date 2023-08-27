#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotateToRight(int arr[],int n,int k){
    //reverse first n-k elements
    reverse(arr,0,n-k-1);
    //reverse last k elements
    reverse(arr,n-k,n-1);

    reverse(arr,0,n-1);
}

void rotateToLeft(int arr[],int n,int k){
    //reverse first k elements
    reverse(arr,0,k);
    //reverse last n-k elements
    reverse(arr,k,n-1);

    reverse(arr,0,n-1);
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  rotateToRight(arr, n, k);
  rotateToLeft(arr,n,k);
  cout << "After Rotating the k elements to right ";
  
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  
cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}