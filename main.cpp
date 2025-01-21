#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3,3};
    int target = 6;
    vector<int> ans(2);
    for (int i=0; i<nums.size();i++){
        for (int j=0 ;j<nums.size();j++){
            if (nums[i]+nums[j]==target&& i!=j){
                ans[0]=i;
                ans[1]=j;
                //return ans;  //this if in a function .
                cout << ans[0] << " " << ans[1] ;
                return 0;
            }
        }
    }
    return 0;
}
