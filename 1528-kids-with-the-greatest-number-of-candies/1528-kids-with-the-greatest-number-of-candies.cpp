class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results;
        int maxi = *max_element(candies.begin(),candies.end());
        for(int  i=0; i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi) results.push_back(true);
            else results.push_back(false);
        }
        return results;
    }
};