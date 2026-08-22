class Solution {
public:
    bool isPalindrome(int n) {
        long long dup=n;
        long long rev=0;
        while(n>0){
            long long ld=n%10;
            rev=(rev*10)+ld;
            n=n/10;
        }
        if(rev==dup){
            return true;}
            else{ return false;
        }
        
    }
};