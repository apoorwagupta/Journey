class Solution {
public:
string ones[20] = {"","One ", "Two ", "Three ", "Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ", "Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ","Sixteen ","Seventeen ","Eighteen ","Nineteen "};
        string tens[10] = {"","","Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
    string completeword(int n,string s){
        string ans ="";
        if (n >= 100) {
            ans += ones[n / 100] + "Hundred ";
            n %= 100;
        }
        if(n<20) ans+= ones[n];
        else ans+= tens[n/10]+ones[n%10];
       
         if (ans != "") ans += s;
         return ans;
    }
    string numberToWords(int num) {
        
      if (num == 0) return "Zero";
        string result;
        result+= completeword((num/1000000000),"Billion ");
        result+= completeword((num/1000000) % 1000,"Million ");
        result+= completeword((num/1000) %1000,"Thousand ");
        result+= completeword((num/100) %10,"Hundred ");
        result+= completeword(num%100,"");

     size_t endpos = result.find_last_not_of(" ");
        if (endpos != string::npos) {
            result.erase(endpos + 1);
        }
    
    return result;
    }
};