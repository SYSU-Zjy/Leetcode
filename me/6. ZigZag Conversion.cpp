class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
        return s;
        string s1;
        int tmp = (numRows-1)*2;//很巧妙，举几个例子
        for(int i = 0;i<s.size();i = i+tmp){//push第一行
            s1.push_back(s[i]);
        }
        for(int i = 1;i<numRows-1;i++){//对中间行处理
            int tmp1 = 2*i;
            for(int j = i;j<s.size();){
                s1.push_back(s[j]);
                tmp1 = tmp-tmp1;//举个例子，中间行是交替间隔的，两个间隔的值交替
                j = j+tmp1;
            }
        }
        for(int i =numRows-1;i<s.size();i = i+tmp){
            s1.push_back(s[i]);
        }
        return s1;
    }
};