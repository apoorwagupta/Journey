class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int  l=0,r=0,minans=INT_MAX,cntW=0;
        int n = blocks.size();
        while(r<n){
        if(blocks[r]=='W') cntW++;
        if(r-l+1>k) 
        { if (blocks[l]=='W') cntW--;
        l++;}
        if (r - l + 1 == k) minans = min(minans, cntW);// update only when window size is k
        r++;
        }
        return minans;
    }
};