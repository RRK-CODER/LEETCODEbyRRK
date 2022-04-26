class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int > m;
        priority_queue<int> pq;
        int n=nums.size();
        for(int i=0; i<k ; i++){
            m[nums[i]]++;
            pq.push(nums[i]);
         }
        res.push_back(pq.top());
        for(int i=k; i<n; i++)
        {
            m[nums[i-k]]--;
            pq.push(nums[i]);
            m[nums[i]]++;
             while(pq.size()>0)
        {
        
             int curr=pq.top();
            if(m[curr]==0)
            {
                pq.pop();
            }
            else{
                 res.push_back(pq.top()); 
                break;
            }
        }  
        }
        return res;
    }
};