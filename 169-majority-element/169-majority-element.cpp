class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, res=0, j=nums.size()/2;
        for(int i=0; i<nums.size(); i++)
        {
        if(nums[i]==nums[j])
            res=nums[i]; 
            else 
                continue;
        }
        return res;
    }
};