class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for i,n in enumerate(nums):
            if n in freq:
                freq[n]+=1
            else:
                freq[n] = 1
        result = []
        for i in range(k):
            a = max(freq,key=freq.get)
            result.append(a)
            del freq[a]
        return result