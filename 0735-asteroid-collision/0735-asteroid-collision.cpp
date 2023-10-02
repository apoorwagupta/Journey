class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        for(int i=0;i<asteroids.size();i++)
        {   
            if(asteroids[i]<0){
                int j = i-1;
                while(j>=0 && asteroids[j]>=0){ // positive 
                    if(asteroids[j]<abs(asteroids[i])) asteroids[j] = 0;
                    else if (asteroids[j]>abs(asteroids[i])) {asteroids[i]=0;break;}
                    else if (asteroids[j]==abs(asteroids[i])) {asteroids[j]=0;asteroids[i]=0;break;}
                j--;
                }
            }
        }

        vector<int> ans;
        for(int i =0 ; i<n; i++) if(asteroids[i] != 0) ans.push_back(asteroids[i]);
        return ans;
    }
};