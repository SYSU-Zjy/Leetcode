class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
        return s;
        string s1;
        int tmp = (numRows-1)*2;//������ټ�������
        for(int i = 0;i<s.size();i = i+tmp){//push��һ��
            s1.push_back(s[i]);
        }
        for(int i = 1;i<numRows-1;i++){//���м��д���
            int tmp1 = 2*i;
            for(int j = i;j<s.size();){
                s1.push_back(s[j]);
                tmp1 = tmp-tmp1;//�ٸ����ӣ��м����ǽ������ģ����������ֵ����
                j = j+tmp1;
            }
        }
        for(int i =numRows-1;i<s.size();i = i+tmp){
            s1.push_back(s[i]);
        }
        return s1;
    }
};