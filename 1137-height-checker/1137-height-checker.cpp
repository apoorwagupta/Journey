// class Solution {
// public:
 
//     int heightChecker(vector<int>& heights) {
//     int n = heights.size();
//     int cnt=0;
//     vector<int> h = heights;
//     sort(heights.begin(),heights.end());
    
//     for(int i = 0;i<n;i++){
//         //  if(heights[i-1]>heights[i] || heights[i+1]<heights[i]) break;
//         if(heights[i]!=h[i]) cnt++;
//       }
//       return cnt;
//     }
// };

class Solution {
public:
 
    int heightChecker(vector<int>& heights) {
    int n = heights.size();
    int hptr =1;
    int cnt=0;
    vector<int> h(101);
    for(int i = 0;i<n;i++) h[heights[i]]++; 
    for(int i = 0;i<n;i++){
        while(h[hptr]==0) hptr++; //smallest height that should be next in sorted order
        if(heights[i]!=hptr) cnt++; // If the current student's height is not in the correct position
        h[hptr]--;
      }
      return cnt;
    }
};