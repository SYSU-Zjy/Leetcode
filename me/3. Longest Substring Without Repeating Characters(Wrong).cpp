class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string tmp;
        int m = 0;
        int n = 0;
        int k = 0;
        int num;
        for(int i =0;i<s.length();i++){
            num = tmp.find(s[i],k);
            if(num == string::npos){
                tmp = tmp + s[i];
                m = m + 1;
                if(i == s.length()-1)
                n = n>m?n:m;
            } else {
                k = num + 1;
                tmp = tmp+s[i];
                n = n>m?n:m;
                m = i-k+1;
            }
        }
        return n;
    }
};