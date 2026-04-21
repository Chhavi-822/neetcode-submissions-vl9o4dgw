class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int st=0,ed=numbers.size()-1;
        while(st<ed){
            int sum=numbers[st]+numbers[ed];
            if(sum<target) st++;
            else if(sum>target) ed--;
            else  {
                ans.push_back(st+1); 
                ans.push_back(ed+1);
                return ans;
            }
        }
        return {};
        
    }
};
