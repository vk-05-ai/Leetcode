class Solution {
public:
    vector<int> diStringMatch(string s) {
        int a=0;
        vector<int> ans;
        int size=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='I') ans.push_back(a++);
            if(s[i]=='D') ans.push_back(size--);
        }
        ans.push_back(a);
        return ans;
    }
};