#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>,int);
int main() {
    vector<int> ans={0,0};
    ans=twoSum({2,3,4},6);
    cout<<ans[0]<<ans[1];
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> noanswer={0,0};
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]=target-nums[i])
            {
                vector<int> ans={i,j};
                return ans;
            }
        }
    }
    return noanswer;
}