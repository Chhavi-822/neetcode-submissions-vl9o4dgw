class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=INT_MAX;
        int min_len;
        string newStr="";
        for(int i=0;i<strs.size();i++){
            min_len= min((int)l,(int)strs[i].size());
        }
        for(int i=0;i<min_len;i++){
            char c=strs[0][i];
            bool allMatch=1;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    allMatch=0;
                    break;
                }
            }
            if(allMatch){
                 newStr+=c;
            }
            else{
                break;
            }
        }
        return  newStr;
       
    }
};