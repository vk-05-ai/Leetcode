class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        int rev=0;
        while(temp>0){
            int r=temp%10;
            temp=temp/10;
            rev=rev*10+r;
        }
        if ((rev-n)>=0) return rev-n;
        else return -(rev-n);
    }
};