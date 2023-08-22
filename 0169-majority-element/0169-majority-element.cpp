class Solution {
public:

    int majorityElement(vector<int>& nums) {
      /*  unordered_map<int,int> m;
        for(auto i:nums) m[i]++; // frequency
        for(auto mp: m){
           if( mp.second>(nums.size()/2))  return mp.first;      
        }
    return 0; // OlogN   sc o(N)*/

  // if element in majority ie more than n/2, others couldnt have cancelled it out and made it zero. therefore this isnt the majority element so move to the next element
  // once cnt is zero, move on to try  a new elt
    int count = 0;
    int elt = 0 ;
    for(int i:nums)
    {if(count==0) elt = i;
    count = (elt==i)?count+1:count-1;} // decrement count when not equal to the elt
    return elt; // someone remaining which didnt get cancelled
    }
}; 