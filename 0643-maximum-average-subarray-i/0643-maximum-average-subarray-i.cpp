class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxsum = INT_MIN; 
        double windowsum = 0;

    for (int i = 0; i < k; ++i) {
        windowsum += nums[i];
    }
    maxsum = windowsum;
    
    for (int i = k; i < n; ++i) {
        windowsum = (windowsum + nums[i]-nums[i-k]);
        maxsum = max(windowsum,maxsum) ;
    }
    return maxsum/k;
    }
};