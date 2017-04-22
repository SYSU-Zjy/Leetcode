class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string premix = "";
        for(int i = 0;strs.size()>0;premix+=strs[0][i],i++){//条件不能是strs[0][i]!='\0',因为strs为空，strs[0][i]不存在
            for(int j = 0;j<strs.size();j++)//注意j是0不是1
                if(i==strs[j].size()||strs[j][i]!=strs[0][i])
                    return premix;
        }
        return premix;
    }
};