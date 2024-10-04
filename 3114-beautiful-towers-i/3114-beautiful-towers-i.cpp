class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        long long ans=0;
        for(int i=0;i<heights.size();i++){
            long long  sum = heights[i];
            int prev =heights[i];
            for(int j=i-1;j>=0;j--){
             prev = min(heights[j],prev);
             sum+= prev;
            }
            prev = heights[i];
            for(int j=i+1;j<heights.size();j++){
             prev = min(heights[j],prev);
             sum+= prev;
            }
            if (sum>ans) ans= sum;
        }
        return ans;
    }
};