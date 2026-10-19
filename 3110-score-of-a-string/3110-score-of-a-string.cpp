class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.size()-1;i++){
            int a=s[i]-s[i+1];
            if(a<0) a*=-1;
            score=score+(a);
        }
        return score;
    }
};