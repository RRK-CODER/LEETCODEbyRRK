class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
         vector<int> v;
        deque <int> dq(k);
  int n=arr.size();
  for(int i=0; i<k; i++)
  {
      while((!dq.empty()) && arr[i]>=arr[dq.back()])
      dq.pop_back();
      dq.push_back(i);
  }
  for(int i=k;i<n; i++)
  {v.push_back(arr[dq.front()]);
  while((!dq.empty()) && dq.front()<=i-k)
      dq.pop_front();
 while((!dq.empty()) && arr[i]>=arr[dq.back()])
 dq.pop_back();
  dq.push_back(i);
  }
 
   v.push_back(arr[dq.front()]);
    return v;
    }
};