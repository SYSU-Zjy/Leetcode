int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)//find the same charactor
                start = dict[s[i]];//set the previous offset of the charactor as start
            dict[s[i]] = i;//renew the position(offset)
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }