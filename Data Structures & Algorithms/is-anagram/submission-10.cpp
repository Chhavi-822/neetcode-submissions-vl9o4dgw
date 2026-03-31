class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl=s.length();
        int tl=t.length();
        if(sl!=tl)
        return false;
        else{
            int count[26]={0};
            
            ;
            for(int i=0;i<sl;i++)
            {
                count[s[i]-'a']++;
            }
            for(int i=0;i<tl;i++)
            {
                count[t[i]-'a']--;
            }
            for(int i=0;i<26;i++){
                if(count[i]!=0)
                return false;
            }
            return true;
        }

        
    }
};
