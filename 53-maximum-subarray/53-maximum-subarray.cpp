class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int n=nums.size();
        int res=nums[0];
        int maxEnding=nums[0];
        for(int i=1; i<n; i++)
        {
maxEnding=max(nums[i],maxEnding + nums[i]);
            res=max(res,maxEnding);
            
            }
        return res;
    }
};