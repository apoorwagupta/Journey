/*
class Solution {
public:

    bool uniqueOccurrences(vector<int>& arr) 
    {
        if(arr.size()==1) // corner case
            return true;

        sort(arr.begin(), arr.end()); // sorting so all same elements club together 
        int uniqcount = 0;
        for(int i=0; i<arr.size()-1;i++)
        {
          if(arr[i] != arr[i+1]) // unique elements
          {uniqcount++;} // count of unique elements
        }

        vector<int> countarray(uniqcount);  // make the freq array of unique elements.
        if(countarray.size()==0) // corner case
            return true;
        int count = 1,k=0;
        // filling in the frequency array
        for (int i = 0; i <arr.size()-1; i++) 
        {
            if ( arr[i] == arr[i + 1])
                count++;
            else
            {
                countarray[k] = count;
                count=1; // resetting count 
                k++;
            }
        }

        if(arr.size()==2 && countarray.size()==1) //both elements are same
            return false;

        sort(countarray.begin(), countarray.end());
        // If the adjacent array count is equal, then the countarray count isn't unique.
        for (int i = 0; i < countarray.size()-1; i++) 
        {
            if ( countarray[i] == countarray[i + 1])
            {
                return false;
            }
        }
        // If all the elements are traversed, it implies countarray frequency counts are unique.
        return true; 
    }
};   */

class Solution {
public:

    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map <int,int> m;
        unordered_set<int> s;
        for(int i:arr) m[i]++; 
        for(auto it = m.begin(); it!=m.end(); it++) s.insert(it->second);

        return(m.size() == s.size());
 }
};  

