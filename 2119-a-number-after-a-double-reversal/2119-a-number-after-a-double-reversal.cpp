class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int rev=0;
        int rev1=0;
        while(temp>0){
            int r=temp%10;
            temp=temp/10;
            rev=(rev*10)+r;
        }
        int t=rev;
        while(t>0){
            int r=t%10;
            t=t/10;
            rev1=(rev1*10)+r;
        }
        return rev1==num;
        
    }
};