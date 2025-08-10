class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int l=0,r=0,n=nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        while(r<n){
           mp[nums[r]]++;
            if(r-l+1==k){
                int cnt=x,beauty=0;
                for(int val=-50;val<=-1;val++){
                    if(mp.count(val)){
                        cnt-=mp[val];
                        if(cnt<=0){beauty=val;break;}
                    }
                }
                ans.push_back(beauty); //store
                mp[nums[l]]--; //shrink
                l++;
            }
            r++;
        }
        return ans;
    }
};
