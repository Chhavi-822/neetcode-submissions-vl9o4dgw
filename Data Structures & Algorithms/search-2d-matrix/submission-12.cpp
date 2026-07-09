class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int r=matrix.size();
        int c=matrix[0].size();
        int high=r*c-1;
        int mid=(low+high)/2;
        while(low<=high){
            int row=mid/c;
            int col=mid%c;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col ]>target) high=mid-1;
            else low = mid+1;
            mid=(low+high)/2;

        }
        return false;

        
    }
};
