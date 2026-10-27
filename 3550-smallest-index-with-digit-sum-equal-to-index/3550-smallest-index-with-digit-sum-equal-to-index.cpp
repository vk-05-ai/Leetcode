class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
                int r=temp%10;
                temp/=10;
                sum=sum+r;
            }
            if(sum==i) return i;
            sum=0;
        }
        return -1;
    }
};