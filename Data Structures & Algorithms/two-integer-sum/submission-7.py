class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = {nums[i]:i for i in range(len(nums))}
        for i in range(len(nums)):
            if target-nums[i] in l and i!=l[target-nums[i]]:
                return sorted([i,l[target-nums[i]]])