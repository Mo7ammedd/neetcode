class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> freq1;
        map<char,int> freq2;

        for (char c : s) {
            freq1[c]++;
        }

        for (char c : t) {
            freq2[c]++;
        }

        if (freq1 == freq2) {
            return true;
        } else {
            return false;
        }
    }
};