class Solution {
public:
    string toLowerCase(string s) {
        // string ans="";
        // int a;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
            // ans.push_back(s[i]+32);
            s[i]+=32;
            }
            // else{
            //     ans.push_back(s[i]);
            // }
        }
        return s;
    }
};