class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n){
        int count=0;
        if(flowerbed.size()==1 && n==1 && flowerbed[0]==0) return 1;
        int left,right;
        int l=flowerbed.size();

        for(int i=0;i<l;i++){
            left=(i==0)?0:flowerbed[i-1];
            right=(i==l-1)?0:flowerbed[i+1];
            if(count<n){
                if(flowerbed[i]==0 && left==0  && right==0){
                    count++;
                    flowerbed[i]=1;
                }

            }
            else break;
        }
        return (count==n)?1:0;

    }
};
