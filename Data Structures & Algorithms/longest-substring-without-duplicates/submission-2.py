class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)==0:
            return 0
        char = set()
        l = 0
        length = 0
        for r,e in enumerate(s):
            while e in char:
                char.remove(s[l])
                l+=1
            char.add(e)
            length = max(length,r-l+1)
        return length
