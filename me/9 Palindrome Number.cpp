class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int y = 0;
        if(x == 0)
        return true;
        if(x<0)
        return false;
        while(temp){
            y = y*10 + temp%10;
            temp = temp/10;
        }
        if(y == x)
        return true;
        else
        return false;
    }
};