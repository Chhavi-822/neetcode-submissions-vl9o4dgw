class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>t;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++)
            {
                if(words[j].size()<=words[i].size()){
                    if(words[i].find(words[j])!=string::npos){
                        t.push_back(words[j]);
                        
                    }
                    else
                    continue;
                }
                else if(words[i].size()<words[j].size()){
                    if(words[j].find(words[i])!=string::npos){
                        t.push_back(words[i]);

                    }
                   
                }

            }
            
        }
        set<string>s(t.begin(),t.end());
        return vector<string>(s.begin(),s.end()); 
    }
};