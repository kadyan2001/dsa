#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
    int n=arr.size();

    int xorr=0;

    for(int i=0;i<n;i++){
        xorr=xorr ^ arr[i];
    }

    return xorr;

}

// int getSingleElement(vector<int> &arr){

//     int n=arr.size();
//     vector<int> :: iterator it;


//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     for(auto &it:mpp){
//         if(it.second==1){
//             return it.first;
//         }

//     }
//     return -1;

// }

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}



    
