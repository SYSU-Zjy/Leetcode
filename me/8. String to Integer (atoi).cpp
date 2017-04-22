class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        int i = 0;
        while(str[i]!='\0'&&str[i] == ' ')
            i++;
        if (str[i] == '\0')
            return 0;
        int signal = 1;
        if(str[i] == '+'){
            if(str[i+1] == '-')
            return 0;
            i++;
        }
        if(str[i] == '-') {
            if(str[i+1] == '+')
            return 0;
            signal = -1;
            i++;
        }
        long long int sum = 0;
        while(str[i]!='\0') {
            if(str[i]>='0'&&str[i]<='9')
                sum = sum*10 +signal*(str[i]-'0');
            else
                return sum;
            if(sum>INT_MAX)
                return INT_MAX;
            if(sum<INT_MIN)
                return INT_MIN;
            i++;
        }
        return sum;
    }
};