class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        bool v=0;
        int i=0;
          for(int j=0;j<m;)
          {
            if(s[i]==t[j])
            {
                i++;
                j++;

            }
            else
            j++;
          }
          if(i==n)
          return true;
          else
          return false;        
    }
};