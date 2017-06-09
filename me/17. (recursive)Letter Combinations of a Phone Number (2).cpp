class Solution {
private:
vector<string> v;
public:
    void findResult(string s,int x,string digit,string d[]){
        if(x == digit.size())
        v.push_back(s);
        else
        for(int i = 0;i<d[digit[x]-'0'].size();i++){
            findResult(s+d[digit[x]-'0'][i],x+1,digit,d);
        }
    }
    vector<string> letterCombinations(string digits) {
        string d[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string s;
        s = {""};
        if(!digits.size())
        return v;
        findResult(s,0,digits,d);
        return v;
    }
};