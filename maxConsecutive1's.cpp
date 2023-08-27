#include<bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &nums){
    int cnt=0;
    int max_count=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        max_count=max(max_count,cnt);
    }
    return max_count;

}
int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  //Solution obj;
  int ans = maxConsecutive(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}