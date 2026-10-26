class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak=0;
        int valley=0;
        for(int i=0;i<nums.size();i++){
            if(0<i && i<nums.size()-1 && nums[i]>nums[i-1] && nums[i] > nums[i+1]) peak=peak+nums[i];

            if(0<i && i<nums.size()-1 && nums[i]<nums[i-1] && nums[i] < nums[i+1]) valley=valley+nums[i];
        }
        return peak-valley;
    }
};