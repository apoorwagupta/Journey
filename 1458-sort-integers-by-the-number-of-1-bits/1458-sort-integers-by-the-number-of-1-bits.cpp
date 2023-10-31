class Solution {
public:
/* Static functions are class bound and not object bound. So the comparator must be static, else you need an object to call the method. Now for the countbit method, it's the same thing. A static method cannot access non-static data members or call non-static methods.

If you don't want to use static for the comparator then simply implement the comparator function outside of the class. */
    static int numberof1s(int n){
        int count = 0;
        while(n){
            count += n&1;
            n = n >> 1;
        }
        return count;
    }

    static bool compare(int a, int b){
        int p = numberof1s(a);
        int q = numberof1s(b);
        if(p==q){
            return (a<=b);
        }
        else{
            return (p<q);
        }
    }
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(),compare);
    return arr;
    }
};