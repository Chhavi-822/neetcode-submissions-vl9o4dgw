class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>st;
        string local,domain;
        string final;
        int index=0;
        for(int i=0;i<emails.size();i++){
            local="",domain="";
            final="";
            index=emails[i].find('@');
            for(int j=0;j<index;j++){
                if(emails[i][j]=='.')
                continue;
                else if(emails[i][j]=='+')
                break;
                else{
                    local+=emails[i][j];
                }
            }
            for(int k=index;k<emails[i].size();k++){
                domain+=emails[i][k];
            }
            final=local+domain;
            st.insert(final);
        }
        int ans=st.size();
        return ans;

        
    }
};