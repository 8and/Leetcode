class Solution {
public:
    bool isPalindrome(int x) {
      long int sum=0, y=x, flag=1;
      if(x<0) flag=-1;
      while(x*flag) {
        sum=sum*10+x%10;
        x/=10;
      }
      return sum*flag == y;
    }
};