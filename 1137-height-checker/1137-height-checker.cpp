class Solution {
public:
    int heightChecker(vector<int>& heights) {
    int n = heights.size();
    int cnt=0;
    vector<int> h = heights;
    sort(heights.begin(),heights.end());
    
    for(int i = 0;i<n;i++){
        //  if(heights[i-1]>heights[i] || heights[i+1]<heights[i]) break;
        if(heights[i]!=h[i]) cnt++;
      }
      return cnt;
    }
};