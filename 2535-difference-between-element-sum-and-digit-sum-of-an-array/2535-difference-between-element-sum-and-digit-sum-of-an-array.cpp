class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int pro=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int temp=nums[i];
            while(temp>0){
                int r= temp%10;
                temp=temp/10;
                pro=pro+r;
            }
        }
        return abs(sum-pro);

    }
};