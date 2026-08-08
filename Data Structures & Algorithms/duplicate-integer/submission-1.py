class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for i in nums:
            if i in freq:
                freq[i]+=1
                if(freq[i]==2):
                    return True
            else:
                freq[i] = 1
        return False