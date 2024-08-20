// class Solution {
// public:
//     bool judgeSquareSum(int c) { // o(sqrtc)
//         for(int a=0; a*a<=c;a++){
//             double b = sqrt(c-a*a);
//             if(b==int(b)) return true;// if b is int, then possible pair found
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool judgeSquareSum(int c) { // o(sqrtc)
        long l=0;
        long r = sqrt(c);
        while(l<=r){
            long long prod =  (l * l) + (r * r);
            if(prod==c) return true;
            if(prod>c) r--;
            else l++; 
        }
        return false;
    }
};
