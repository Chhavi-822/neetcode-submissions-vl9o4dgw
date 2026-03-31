class Solution {
public:
    int countSeniors(vector<string>& details) {
        int l=details.size();
        int count=0;
        for(const string& s:details){
            int n=stoi(s.substr(11,2));
            if(n>60)
            count++;
        }
    return count;
        
    }
};