class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string d[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> s;
        if(digits.size()==0)
        return s;
        s={""};
        for(int i = 0;i<digits.size();i++){
            vector<string> tmp;
            for(int j = 0;j<s.size();j++){
                for(int k = 0;k<d[digits[i]-'0'].size();k++)
                tmp.push_back(s[j]+d[digits[i]-'0'][k]);
            }
            s = tmp;
        }
        return s;
    }
};