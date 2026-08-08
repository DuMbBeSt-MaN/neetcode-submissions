class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        setNums = set()
        for i in nums:
            if i in setNums:
                return True
            else:
                setNums.add(i)
        return False