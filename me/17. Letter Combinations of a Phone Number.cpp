/* 主要是先对第一个键进行处理，例如2，s先为(a,b,c)之后对s的每个字母，分别加入第二个键对应的字母 */

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string d[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> s;
        if(digits.size()==0)
        return s;
        s={""};
        for(int i = 0;i<digits.size();i++){//数字的位数
            vector<string> tmp;
            for(int j = 0;j<s.size();j++){//在之前的基础上加入字母
                for(int k = 0;k<d[digits[i]-'0'].size();k++)//数字按键对应的字母
                tmp.push_back(s[j]+d[digits[i]-'0'][k]);
            }
            s = tmp;
        }
        return s;
    }
};