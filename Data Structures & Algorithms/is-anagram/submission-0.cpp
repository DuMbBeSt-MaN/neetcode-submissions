class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

    std::unordered_map<char, int> freqS;
    for (char c : s) freqS[c]++;
    for (char c : t){freqS[c]--;if(freqS[c]==0)freqS.erase(c);}

    return freqS.empty();
    }
};
