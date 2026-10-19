class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=0;
        for(i=2;i;i++){
            if(i%2==0 && i%n==0) return i;
        }
        return i;
    }
};