class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.size() != t.size()) return false; // Early exit if lengths differ

    std::unordered_map<char, int> freq;
    
    // Increment counts for 's'
    for (char c : s) freq[c]++;
    
    // Decrement counts for 't' and check for mismatches
    for (char c : t) {
        if (--freq[c] < 0) return false; // More 'c' in 't' than 's'
    }
    
    return true; // All counts balanced (no negative values)
    }
};
