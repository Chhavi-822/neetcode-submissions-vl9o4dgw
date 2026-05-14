class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            //skip duplicates
            if(i-1>=0 && nums[i-1]==nums[i] )  continue;
            
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)  j++;
                else if(sum>0) k--;
                else {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    int left=nums[j];
                    int right=nums[k];
                    while(j<k && left==nums[j]) j++;
                    while(j<k && right == nums[k]) k--;
                }
            }

        }
        return ans;
        
    }
};
