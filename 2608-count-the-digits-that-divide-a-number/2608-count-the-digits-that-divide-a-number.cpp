class Solution {
public:
    int countDigits(int num) {
        int og=num, cnt=0;
        while(num>0){
            if(og%(num%10) ==0) cnt++;
            num = num/10;
        }
        return cnt;
    }
};