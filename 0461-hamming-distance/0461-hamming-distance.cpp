class Solution {
public:
    int hammingDistance(int x, int y) {
        int r = x^y,cnt=0;
        while(r){
            cnt+=r&1;
            r=r>>1;
        }
        return cnt;
    }
};