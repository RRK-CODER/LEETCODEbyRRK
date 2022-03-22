class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set <int> res;
        for(int i=0; i<arr.size(); i++)
        {
            res.insert(arr[i]);
            for(int j=i-1; j>=0; j--)
            {
                if((arr[i] | arr[j]) ==arr[j])
                    break;
                arr[j] |= arr[i];
                res.insert(arr[j]);
            }
        }
        return res.size();
    }
};