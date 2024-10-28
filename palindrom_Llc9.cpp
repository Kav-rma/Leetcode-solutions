class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        int rev=0;
          if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        while (temp>0){
           int digit =temp%10;
            if (rev > (INT_MAX - digit) / 10) {
                return false;
            }
            rev=rev*10+digit;
            temp=temp/10;
        }
        if(rev==x){
            return true;
            }
        else{
           return false;
        }
}
};