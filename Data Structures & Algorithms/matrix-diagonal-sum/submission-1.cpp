class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int sum=0;
        for(int i=0;i<row;i++){
            sum+=mat[i][i];
            if(i!= row-i-1) sum+=mat[i][row-i-1];
        }
        return sum;
    }
};