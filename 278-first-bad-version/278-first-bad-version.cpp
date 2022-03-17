class Solution {
public:
int firstBadVersion(int n) {
int l=1,h=n;
int res=0;
while(h>=l){

     int mid=(h-l)/2 + l;
        if(isBadVersion(mid)){h=mid-1; }
        else{l=mid+1;}
    }
    if(isBadVersion(l)){return l;}
    else{return l+1;}
    
}
};