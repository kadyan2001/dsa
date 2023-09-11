#include<bits/stdc++.h>
using namespace std;

vector<int> Findunion (int arr1[],int arr2[],int m,int n){
    map<int,int> freq;
    vector<int> Union;
    vector<int> ::iterator it;

    for(int i=0;i<n;i++){
        freq[arr1[i]]++;
    }

    for(int i=0;i<m;i++){
        freq[arr2[i]]++;

    }

    

    for(auto &it:freq){
        Union.push_back(it.first);
    }
    return Union;

}

// second using set function

vector<int> Findunion(int arr1[],int arr2[],int m,int n){
    set<int> s;
    vector<int> Union2;

    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }

    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }

    for(auto &it:s){
        Union2.push_back(it);
    }
    return Union2;
}


//Third Method Using Two Pointer

vector<int> Findunion(int arr1[],int arr2[],int n,int m){

    int i=0,j=0;
    vector<int> Union3;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(Union3.size()==0 || Union3.back()!=arr1[i]){
                Union3.push_back(arr1[i]);
                i++;
            }
        }
        else{
            if(arr1[i]>arr2[j]){
                if(Union3.size()==0 || Union3.back()!=arr2[j]){
                Union3.push_back(arr2[j]);
                j++;
                }
            }
        }
    }

    while (i<n){
        if(Union3.size()!=arr1[i]){
            Union3.push_back(arr1[i]);
            i++;
        }
    }
    while(j<m){
        if(Union3.size()!=arr2[j]){
            Union3.push_back(arr2[j]);
            j++;
        }
    }
    return Union3;
}