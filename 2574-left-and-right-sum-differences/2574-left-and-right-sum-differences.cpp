class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int ls=0;
            int rs=0;
            for(int j=0;j<nums.size();j++){
                if(j<i) ls=ls+nums[j];
                if(j>i) rs=rs+nums[j];
            }
            ans.push_back(abs(ls-rs));

        }
        return ans;
    }
};