class Solution {
public:
    string longestPalindrome(string s) {
        string s1(s.rbegin(),s.rend());
        for(int i = s.size();i>=1;i--){
            for(int j = 0;j<s.size();j++){
                if(i+j <=s.size()){
                    string tmp1 = s1.substr(j,i);
                    if(s.find(tmp1)+i+j == s.size())
                    return tmp1;
                }
            }
        }
    }
};