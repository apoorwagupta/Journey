class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l=k-1,r=n-1;
        int sum = accumulate(cardPoints.begin(),cardPoints.begin()+k, 0);
        int ans=sum;
        while(k>0){
            sum-=cardPoints[l--];
            sum+=cardPoints[r--];
            cout<< sum;
            ans = max(ans,sum);
            k--;
        }
        return ans;
    }
};