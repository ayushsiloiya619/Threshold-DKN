//Leetcode question..Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
    int temp=x;
    long int ans=0;
    int last_dig;
    while(x>0){
        last_dig=x%10;///121==1//121==2//121==1
        ans=(ans*10)+last_dig;//10+2==12//120+1==121
        x=x/10;
    }
    return ans==temp;
    }
};
 