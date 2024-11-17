class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0)
    return 0;
    int temp=x;
    int reverse=0;
    for(;x!=0;){
        int a = x % 10;
        if(((INT_MAX-a)/10)<reverse){
                return false;
        }
        reverse = reverse * 10 + a;
        x=x/10;
      }
      x=temp;
      if(reverse==x){
        return true;
      }
    return false;
    }
};
