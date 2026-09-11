class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0 ;
        int num = x;
        while(num>0){
            int a = num%10;
            rev = rev*10+a;
            num = num/10;
        }
        if(rev == x){
            return true;
        }
        else {
            return false;
        }
    }
};