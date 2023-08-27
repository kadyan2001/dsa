#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int> &a,int N){
    int sum=(N*(N+1))/2;
    int s=0;

    for(int i=0;i<N-1;i++){
        s+=a[i];
    }

    int missingNo= sum-s;
    return missingNo;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNum(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}