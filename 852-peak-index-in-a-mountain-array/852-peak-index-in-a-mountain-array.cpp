class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high= arr.size()-1,mid=0, ans=0;
        while(low<=high)
        {
            mid=low+ (high-low)/2;
if(mid-1>=0 && mid+1<arr.size() &&arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
{ ans= mid;
            break;}
           
           else if(mid+1 < arr.size() && arr[mid] < arr[mid+1])
                low = mid+1;
            else if(mid-1 >= 0 && arr[mid-1] > arr[mid])
                high = mid-1;
        }
        return ans;
    }
};