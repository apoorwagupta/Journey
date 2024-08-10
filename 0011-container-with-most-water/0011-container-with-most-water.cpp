class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j= height.size()-1;
        int area=0,res=0;
        while(i<j){
            area = min(height[i],height[j])*(j-i);
            res = max(res,area);
            if(height[i]<=height[j]) i++;
            else j--;
         
        }
        return res;
    }
};