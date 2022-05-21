class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
        mp[nums[i]]++;
        }
        for(auto e:mp)
        { if(e.second==2) v.push_back(e.first);}
        return v;
    }
};