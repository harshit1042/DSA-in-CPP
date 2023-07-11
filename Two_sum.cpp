class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,b=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(nums[i]+nums[j]==target){
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};
