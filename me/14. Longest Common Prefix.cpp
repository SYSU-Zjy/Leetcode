class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string premix = "";
        for(int i = 0;strs.size()>0;premix+=strs[0][i],i++){//����������strs[0][i]!='\0',��ΪstrsΪ�գ�strs[0][i]������
            for(int j = 0;j<strs.size();j++)//ע��j��0����1
                if(i==strs[j].size()||strs[j][i]!=strs[0][i])
                    return premix;
        }
        return premix;
    }
};