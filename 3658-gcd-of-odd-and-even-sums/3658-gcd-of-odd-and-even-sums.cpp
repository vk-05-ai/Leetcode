class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0;
        int o=0;
        int x=1;
        for(int i=1;i<=n+n;i++){
            if(i%2==0) e=e+i;
            else o=o+i;
        }
        return gcd(o,e);
    }
};