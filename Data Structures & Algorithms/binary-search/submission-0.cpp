class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, ed=nums.size();
        int mid=st+(ed-st)/2;
        while(st<ed){
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) ed--;
            else st++;
            mid=st+(ed-st)/2;
        }
        return -1;
        
    }
};
