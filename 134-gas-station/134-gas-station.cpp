class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr_pet=0, prev_pet=0, start=0,count;
        
        for(int i=0; i<gas.size(); i++)
        {
curr_pet+=gas[i]-cost[i];
            if(curr_pet<0)
            { start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;}
         }
        return ((curr_pet+prev_pet)>=0)?(start):-1;
    }
};