class Solution {
public:
    bool isMatch(string s, string p) {
        if (p.empty())    return s.empty();//作为终结，很重要
        
        if ('*' == p[1])
            // x* matches empty string or at least one character: x* -> xx*
            // *s is to ensure s is non-empty
            //前半部分对星号后的进行匹配（因为x*可能为不存在，直接跳到x*后进行匹配），后半部分从当前开始匹配（开始匹配x*）
            //比如aaab和a*b，第一次递归，前半部分用aaab和b进行匹配，后半部分依次用aaab与a*匹配。
            //当后半部分匹配完后，这时s和p分别为b,a*b。后半部分此时b与a不相等，但是这一次递归的前半部分站了出来，b和p.substr(2)，b和b匹配了
            //递归，每一次递归都进行了前半部分的匹配和后半部分的匹配
            return (isMatch(s, p.substr(2)) || !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p));
        else
            return !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p.substr(1));
    }
};