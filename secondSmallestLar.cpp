#include<bits/stdc++.h>
using namespace std;

//Better

void getElement(int arr[],int n){
    if(n<2){
        cout<< -1;
    }

    int small=INT_MAX,secondSmallest=INT_MAX;
    int largest=INT_MIN,secondLargest=INT_MIN;

    for(int i=0;i<n;i++){
        small=min(arr[i],small);
        largest=max(arr[i],largest);

    }
    for(int i=0;i<n;i++){
        if(arr[i]<secondSmallest && arr[i]!=small){
            secondSmallest=arr[i];
        }
        if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    
}





//Optimal
int secondSmallest(int arr[],int n){

    if(n<2){
        return -1;
    }
    int small=INT_MAX;
    int secondSmall=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secondSmall=small;
            small=arr[i];
        }
        else if(arr[i]<secondSmall && arr[i]!=small){
            secondSmall=arr[i];
        }
    }
    return secondSmall;
}

int secondLargest(int arr[],int n){
    if(n<2){
        return -1;
    }

    int largest=INT_MIN;
    int secondLargest=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}