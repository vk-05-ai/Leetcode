class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
                int r=temp%10;
                temp/=10;
                sum=sum+r;
            }
            nums[i]=sum;
            sum=0;
        }
        int min=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return min;
    }
};