class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            max=0;
            for(int j=i+1;j<n;j++)
            {
               if(arr[j]>max)
               max=arr[j];
            }
            if(i!=n-1)
            {
                arr[i]=max;
            }
            if(i==n-1)
            arr[i]=-1;
            
        }
        return arr;
    }
};