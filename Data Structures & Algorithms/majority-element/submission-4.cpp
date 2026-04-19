class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=nums.size()/2;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }

        for(auto it:mp){
            if(it.second>maj)
            return it.first;
            
        }
        
    }
};