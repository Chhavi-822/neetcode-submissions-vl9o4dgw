class Solution {
public:
    int maxDifference(string s) {
        map<char,int>m;
        int odd=INT_MIN, even=INT_MAX;
        for(char ch='a';ch<='z';ch++){
            m[ch]=0;
        }
        for(char cpp:s){
            m[cpp]++;
        }
        for(char ch='a';ch<='z';ch++){
            if( m[ch]>0 && m[ch]%2 !=0){
                odd=max(m[ch],odd);
            }
            if(m[ch]>0 && m[ch]%2==0) {
                even=min(m[ch],even);
            }
        }

        return odd-even;
    }
};