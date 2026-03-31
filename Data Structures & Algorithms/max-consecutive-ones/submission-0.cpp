class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=nums.size();
        int count=0;
        int ans=INT_MIN;
        for(int i=0;i<len;i++){
            if(nums[i]==1){
                count+=1;
            }
            else{
                ans=max(count,ans);
                count=0;
            }
        }
        ans=max(count,ans);
        return ans;
    }
};