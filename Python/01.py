class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        store = dict()
        for i in range(len(nums)):
            sec = target - nums[i]
            if sec not in store:
                store[nums[i]]=i
            else:
                return [store[sec],i] 
