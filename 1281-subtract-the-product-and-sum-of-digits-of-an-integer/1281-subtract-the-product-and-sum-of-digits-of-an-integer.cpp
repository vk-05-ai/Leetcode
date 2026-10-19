class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=n;
        int p=1;
        int s=0;
        while(temp>0){
            int r=temp%10;
            temp=temp/10;
            p=p*r;
            s=s+r;

        }
        return p-s;
    }
};