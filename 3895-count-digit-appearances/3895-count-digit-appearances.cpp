class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
                int r=temp%10;
                temp/=10;
                if(r==digit) c++;
            }
        }
        return c;
    }
};