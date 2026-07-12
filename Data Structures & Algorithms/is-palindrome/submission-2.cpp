class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(char ch:s){
           if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) st+=ch;
        }
        int j=st.size()-1;
        int i=0;
        while(i<j){
            if(st[i]==st[j]) {
                i++;
                j--;
            }
            else{
                break;
            }

        }
        if(i>=j) return true;
        else return false;

    }
};
