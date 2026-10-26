class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp=heights;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                if(heights[i]>heights[j]){
                    int temp=heights[i];
                    heights[i]=heights[j];
                    heights[j]=temp;
                }
            }
        }
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(temp[i] != heights[i]) c++;
        }
        return c;
    }
};