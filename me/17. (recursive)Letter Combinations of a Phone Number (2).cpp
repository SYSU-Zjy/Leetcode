class Solution {
private:
vector<string> v;
public:
    void findResult(string s,int x,string digit,string d[]){//后两个参数是不变的，第一个参数表示一个元素（累加的）
        if(x == digit.size())                               //第二个参数表示正在处理的给定数字字符串的数字对应的下标
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