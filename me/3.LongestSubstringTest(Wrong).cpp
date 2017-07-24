#include <iostream>
#include <string>

using namespace std;

class Solution
{
  private:
    string result;
    int n;

  public:
    Solution()
    {
        n = 0;
    }
    void lengthOfLongestSubstring(string s)
    {
        string tmp;
        int m = 0;
        int k = 0;
        int num;
        for (int i = 0; i < s.length(); i++)
        {
            num = tmp.find(s[i], k);
            if (num == string::npos)
            {
                tmp = tmp + s[i];
                m = m + 1;
                if (i == s.length() - 1)
                {
                    n = n > m ? n : m;
                    if (n == m)
                    {
                        result = tmp;
                    }
                }
            }
            else
            {
                k = num;
                n = n > m ? n : m;
                if (n == m)
                {
                    result = tmp;
                }
                m = 0;
                tmp.clear();
            }
        }
    }
    string GetResult()
    {
        return result;
    }
    int GetNumber()
    {
        return n;
    }
};

int main()
{
    string a = "asfafegradfkjlwqyteawiefja";
    Solution sol;
    sol.lengthOfLongestSubstring(a);
    cout << sol.GetResult() << "\n"
         << sol.GetNumber();
    system("pause");
    return 0;
}