class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1;
        while(l>=0 && s[l]==' '){
            l--;
        }
        int last=0;
        for(int i=l;i>=0;i--){
            if(s[i]!=' '){
                last++;
            }
            else if(s[i]==' ')
            break;
        }
        return last;
        
    }
};