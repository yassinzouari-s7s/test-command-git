class Solution {
public:
    bool isPalindrome(int x) {
       if(x<=9&&x>=0){return true;}
       if(x<0){return false;}
       if(x%10==0){return false;}
       int rev=0;
       while(rev<x){
        rev=rev*10+x%10;
        x=x/10;
       }
       return rev == x || rev / 10 == x;
    }
};